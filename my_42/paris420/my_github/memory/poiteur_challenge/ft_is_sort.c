#include <stdio.h>

/*
** Compare two integers.
**
** Returns:
** - negative if a < b
** - 0 if a == b
** - positive if a > b
*/
int	ft_compare(int a, int b)
{
	return (a - b);
}

/*
** Returns 1 if the array is sorted
** in ascending or descending order.
** Returns 0 if it is not sorted.
*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	direction;
	int	result;

	i = 0;
	direction = 0;

	while (i < length - 1)
	{
		result = f(tab[i], tab[i + 1]);

		/*
		** If the numbers are different,
		** find the direction of the array.
		*/
		if (result != 0)
		{
			if (direction == 0)
				direction = result;

			/*
			** Direction changed:
			** array is not sorted.
			*/
			else if ((direction < 0 && result > 0)
				|| (direction > 0 && result < 0))
				return (0);
		}
		i++;
	}
	return (1);
}
// int tab4[] = {5, 7, 1, 2, 3, 9};
int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5};
	int	tab2[] = {5, 4, 3, 2, 1};
	int	tab3[] = {1, 3, 2, 4, 5};
	int	tab4[] = {1, 1, 2, 2, 3, 3};

	printf("%d\n", ft_is_sort(tab1, 5, &ft_compare));
	printf("%d\n", ft_is_sort(tab2, 5, &ft_compare));
	printf("%d\n", ft_is_sort(tab3, 5, &ft_compare));
	printf("%d\n", ft_is_sort(tab4, 6, &ft_compare));

	return (0);
}