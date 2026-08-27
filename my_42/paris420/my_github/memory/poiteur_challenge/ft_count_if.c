#include <stdio.h>

/*
** Test function.
**
** Returns 1 if the string contains 'a'.
** Returns 0 if it does not contain 'a'.
*/
int	ft_has_a(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

/*
** ft_count_if
**
** Counts how many elements make f()
** return something different from 0.
**
** tab    = array of strings
** length = number of strings
** f      = function used to test each string
*/
int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;

	/*
	** Start at the first element.
	*/
	i = 0;

	/*
	** Start the counter at 0.
	*/
	count = 0;

	/*
	** Check every element of the array.
	*/
	while (i < length)
	{
		/*
		** Give the current string to f().
		**
		** If f() returns something different
		** from 0, we found a match.
		*/
		if (f(tab[i]) != 0)
		{
			count++;
		}

		/*
		** Move to the next string.
		*/
		i++;
	}

	/*
	** Return the total number of matches.
	*/
	return (count);
}

int	main(void)
{
	char	*tab[] = {
		"hello",
		"world",
		"cat",
		"apple",
		"test",
		"banana"
	};

	printf("%d\n", ft_count_if(tab, 6, &ft_has_a));

	return (0);
}