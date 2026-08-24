#include <stdio.h>

/*
** Search for the string "to_find" inside the string "str".
** If found, return a pointer to the beginning of the match.
** If not found, return 0.
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	/* If to_find is empty, return the original string */
	if (to_find[0] == '\0')
		return (str);

	i = 0;

	/* Go through every character of str */
	while (str[i])
	{
		j = 0;

		/*
		** Compare str[i + j] with to_find[j].
		** Keep going while the characters are equal.
		*/
		while (to_find[j] && str[i + j] == to_find[j]) // 
			j++;

		/*
		** If we reached the end of to_find,
		** the complete string was found.
		** Return the address of str[i].
		*/
		if (to_find[j] == '\0')
			return (&str[i]);

		/* Move to the next character in str */
		i++;
	}

	/* to_find was not found */
	return (0);
}

int	main(void)
{
	char	str[] = "Hello world, welcome!";
	char	*to_find;
	char	*result;

	to_find = "hello";

	result = ft_strstr(str, to_find);

	if (result)
		printf("Found: %s\n", result);
	else
		printf("Not found\n");

	return (0);
}