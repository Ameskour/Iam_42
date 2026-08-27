#include <stdio.h>

/*
** Calculates the factorial of a number using a loop.
**
** Example:
** 3! = 3 × 2 × 1 = 6
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	/* Factorial isa not defined for negative numbers */
	if (nb < 0)
		return (0);

	/* Start the result at 1 because multiplying by 1 changes nothing */
	result = 1;
	i = 1;

	/* Multiply result by every number from 1 to nb */
	while (i <= nb)
	{
		result = result * i;
		i++;
	}

	/* Return the final factorial result */
	return (result);
}

int	main(void)
{
	/* Calculate 3! and print the result */
	printf("%d ", ft_iterative_factorial(3));

	return (0);
}