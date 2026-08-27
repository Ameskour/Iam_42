#include <stdio.h>

/*
** Test function.
**
** Returns 1 if the string contains the letter 'a'.
** Returns 0 otherwise.
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
** ft_any
**
** Returns 1 if at least one string makes f()
** return something different from 0.
**
** Returns 0 if every string makes f() return 0.
**
** The array ends with NULL.
*/
int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char	*tab1[] = {"hello", "world", "cat", 0};
	char	*tab2[] = {"hello", "world", "test", 0};
	char	*tab3[] = {"apple", "orange", "banana", 0};

	printf("tab1: %d\n", ft_any(tab1, &ft_has_a));
	printf("tab2: %d\n", ft_any(tab2, &ft_has_a));
	printf("tab3: %d\n", ft_any(tab3, &ft_has_a));

	return (0);
}