/*
 * Function from utils.c.
 */
void	ft_putchar(char c);

/*
 * Print the completed 4x4 grid.
 *
 * Example:
 *
 * 1 2 3 4
 * 2 3 4 1
 * 3 4 1 2
 * 4 1 2 3
 */
void	print_grid(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;

	while (row < 4)
	{
		col = 0;

		while (col < 4)
		{
			/*
			 * Convert integer to character.
			 *
			 * 1 + '0' = '1'
			 * 2 + '0' = '2'
			 * etc.
			 */
			ft_putchar(grid[row][col] + '0');

			/*
			 * Put a space between numbers,
			 * but not after the last number.
			 */
			if (col < 3)
				ft_putchar(' ');

			col++;
		}

		/*
		 * Move to the next line.
		 */
		ft_putchar('\n');

		row++;
	}
}