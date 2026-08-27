#include <unistd.h>

int	main(void)
{
	int	row;
	int	col;

	row = 1;
	while (row <= 3)
	{
		col = 1;
		while (col <= 5)
		{
			write(1, "X", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
	return (0);
}