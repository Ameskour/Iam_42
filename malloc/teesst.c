#include <stdio.h>
#include <stdlib.h>

/* Check if c is a separator */
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

/* Count the words */
int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		/* Current char is not a separator */
		if (!is_sep(str[i], charset))
		{
			/* Beginning of a new word */
			if (i == 0 || is_sep(str[i - 1], charset))
				count++;
		}
		i++;
	}
	return (count);
}

/* Copy one word */
char	*copy_word(char *str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;

	/* Find word length */
	while (str[len] && !is_sep(str[len], charset))
		len++;

	/* Allocate memory */
	word = malloc((len + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	/* Copy characters */
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

/* Split the string */
char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;

	/* Allocate array */
	tab = malloc((count_words(str, charset) + 1) * sizeof(char *));
	if (tab == NULL)
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

	/* End of array */
	tab[j] = NULL;

	return (tab);
}

/* Test */
int	main(void)
{
	char	**tab;
	int		i;

	tab = ft_split("Hello,World-42...", ",-");
	if (tab == NULL)
		return (1);

	i = 0;
	while (tab[i])
	{
		printf("tab[%d] = %s\n", i, tab[i]);
		free(tab[i]);
		i++;
	}
	free(tab);

	return (0);
}