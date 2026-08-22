#include <stdio.h>

/*
** Check if c is a separator.
**
** Example:
** charset = ",-"
** c = ','
** -> return 1
**
** c = 'H'
** -> return 0
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
** Count the number of words.
**
** A word starts when:
** - the character is NOT a separator
** - AND it is the first character
**   OR the previous character is a separator
*/
int	count_words(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	while (str[i])
	{
		/*
		** Check that the current character
		** is NOT a separator.
		*/
		if (!is_sep(str[i], charset))
		{
			/*
			** If we are at the beginning of the string,
			** this is the beginning of a word.
			**
			** OR if the previous character is a separator,
			** this is also the beginning of a new word.
			*/
			if (i == 0 || is_sep(str[i - 1], charset))
				count++;
		}
		i++;
	}
	return (count);
}

int	main(void)
{
	char	*str;
	char	*charset;
	int		result;

	str = "Hello,World-42";
	charset = ",-";

	printf("String: %s\n", str);
	printf("Charset: %s\n\n", charset);

	/* Test is_sep() */
	printf("is_sep(',') = %d\n", is_sep(',', charset));
	printf("is_sep('-') = %d\n", is_sep('-', charset));
	printf("is_sep('H') = %d\n", is_sep('H', charset));

	/* Test count_words() */
	result = count_words(str, charset);

	printf("\nNumber of words = %d\n", result);

	return (0);
}