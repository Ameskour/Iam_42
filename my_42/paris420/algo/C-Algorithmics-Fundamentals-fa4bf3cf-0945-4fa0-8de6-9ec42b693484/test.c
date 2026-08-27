#include <stdio.h>

void	f(void)
{
	static int	count;

	count++;
	printf("%d\n", count);
}

int	main(void)
{
	f();
	return (0);
}
