#include <stdlib.h>

/*
** Get the length of one string.
*/
int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
** Calculate the total length needed for the result.
** We add the length of all strings and separators.
*/
int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	i = 0;
	len = 0;

	/* Add the length of all strings. */
	while (i < size)
	{
		len = len + str_len(strs[i]);
		i++;
	}

	/* Add the length of all separators. */
	i = 0;
	while (i < size - 1)
	{
		len = len + str_len(sep);
		i++;
	}
	return (len);
}

/*
** Join all strings with the separator between them.
*/
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		len;
	int		i;
	int		j;
	int		pos;

	/* If there are no strings, return an empty string. */
	if (size == 0)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}

	/* Calculate the memory needed and allocate it. */
	len = total_len(size, strs, sep);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
        
	i = 0;
	pos = 0;

	/* Go through every string. */
	while (i < size)
	{
		j = 0;

		/* Copy the current string into result. */
		while (strs[i][j] != '\0')
		{
			result[pos] = strs[i][j];
			pos++;
			j++;
		}

		/* Add the separator between strings. */
		if (i < size - 1)
		{
			j = 0;
			while (sep[j] != '\0')
			{
				result[pos] = sep[j];
				pos++;
				j++;
			}
		}
		i++;
	}

	/* End the result string. */
	result[pos] = '\0';

	return (result);
}