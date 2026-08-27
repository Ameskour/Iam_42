#include <stdio.h>

/*
** Calculates the factorial of a number using recursion.
**
** Example:
** 4! = 4 × 3 × 2 × 1 = 24
*/
int	ft_recursive_factorial(int nb)
{
	/* Factorial is not defined for negative numbers */
	if (nb < 0)
		return (0);

	/* Base case: 0! = 1 */
	if (nb == 0)
		return (1);

	/*
	** Recursive case:
	** nb! = nb × (nb - 1)!
	*/
	return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	/* Calculate 4! and print the result */
	printf("%d ", ft_recursive_factorial(4));

	return (0);
}