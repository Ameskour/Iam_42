#include <stdio.h>
#include <stdlib.h>

int	square(int n)
{
	return (n * n);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	result = malloc(sizeof(int) * length);
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

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	*new_tab;
	int	i;

	new_tab = ft_map(tab, 5, &square);

	i = 0;
	while (i < 5)
	{
		printf("%d ", new_tab[i]);
		i++;
	}

	printf("\n");
	free(new_tab);

	return (0);
}