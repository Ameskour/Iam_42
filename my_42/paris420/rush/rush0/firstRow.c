#include <unistd.h>

int	main(void)
{
	int	col;

	col = 1;
	while (col <= 5)
	{
		if (col == 1)
			write(1, "A", 1);
		else if (col == 5)
			write(1, "C", 1);
		else
			write(1, "B", 1);
		col++;
	}
	write(1, "\n", 1);
	return (0);
}