#include <stdio.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = malloc(length * sizeof(int));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

int	square(int n)
{
	return (n * n);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4};
	int	*result;
	int	i;

	result = ft_map(tab, 4, square);
	i = 0;
	while (i < 4)
	{
		printf("%d ", result[i]);
		i++;
	}
	printf("\n");
	free(result);
	return (0);
}