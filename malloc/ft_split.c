#include <stdlib.h>
#include <stdio.h>
 /*
** Check if c is a separator.
**
** Example:
** charset = ",-"
** c = ','
** -> return 1
*/
int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

/*
** Count how many words are in str.
*/
int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (!is_sep(str[i], charset))
		{
			if (i == 0 || is_sep(str[i - 1], charset))
				count++;
		}
		i++;
	}
	return (count);
}


/*
** Copy one word into malloc memory.
*/
char	*copy_word(char *str, char *charset)
{
	char	*word;
	int		len; // len counts CHARACTERS in ONE WORD 
	int		i;

	len = 0;

	/* Find word length */
	while (str[len] && !is_sep(str[len], charset))
		len++;

	/* Allocate memory */
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);

	/* Copy the word */
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}

	/* End the string */
	word[i] = '\0';

	return (word);
}

/*
** Split the string into words.
*/
char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	/* Allocate space for all word pointers + NULL */
	tab = malloc(sizeof(char *) * ((str, charset) + 1));
	if (!tab)
		return (NULL);

	i = 0;
	j = 0;

	while (str[i])
	{
		/* Skip separators */
		while (str[i] && is_sep(str[i], charset))
			i++;

		if (str[i])
		{
			/* Copy the word */
			tab[j] = copy_word(&str[i], charset);
			j++;

			/* Skip the word */
			while (str[i] && !is_sep(str[i], charset))
				i++;
		}
	}

	/* Last element = NULL */
	tab[j] = NULL;

	return (tab);
}

int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Hello,World-42", ",-");

	if (tab == NULL)
		return (1);

	i = 0;
	while (tab[i] != NULL)
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}

	free(tab);

	return (0);
}