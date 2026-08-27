#include <unistd.h>
#include <stdlib.h>

/*
 * Print a string using write().
 */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
 * Print the 4x4 grid.
 */
void	print_grid(int grid[4][4])
{
	int	row;
	int	col;
	char	c;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			/*
			 * Convert number to character.
			 * 1 + '0' = '1'
			 */
			c = grid[row][col] + '0';
			write(1, &c, 1);

			if (col < 3)
				write(1, " ", 1);

			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

/*
 * Read the input.
 *
 * We need exactly 16 numbers.
 * Each number must be between 1 and 4.
 */
int	parse_input(char *str, int *clues)
{
	int	i;
	int	count;

	i = 0;
	count = 0;

	while (str[i])
	{
		/*
		 * Too many numbers.
		 */
		if (count >= 16)
			return (0);

		/*
		 * Number must be between '1' and '4'.
		 */
		if (str[i] < '1' || str[i] > '4')
			return (0);

		/*
		 * Convert character to integer.
		 */
		clues[count] = str[i] - '0';
		count++;
		i++;

		/*
		 * Numbers must be separated by spaces.
		 */
		if (count < 16)
		{
			if (str[i] != ' ')
				return (0);
			i++;
		}
	}

	/*
	 * We need exactly 16 clues.
	 */
	if (count != 16)
		return (0);

	return (1);
}

/*
 * Check if we can put 'number'
 * in grid[row][col].
 *
 * We cannot have the same number
 * twice in a row or column.
 */
int	can_put(int grid[4][4], int row, int col, int number)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		/*
		 * Check the row.
		 */
		if (grid[row][i] == number)
			return (0);

		/*
		 * Check the column.
		 */
		if (grid[i][col] == number)
			return (0);

		i++;
	}

	return (1);
}

/*
 * Count buildings visible from the LEFT.
 */
int	visible_left(int grid[4][4], int row)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 0;

	while (col < 4)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		col++;
	}

	return (count);
}

/*
 * Count buildings visible from the RIGHT.
 */
int	visible_right(int grid[4][4], int row)
{
	int	max;
	int	count;
	int	col;

	max = 0;
	count = 0;
	col = 3;

	while (col >= 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		col--;
	}

	return (count);
}

/*
 * Count buildings visible from the TOP.
 */
int	visible_up(int grid[4][4], int col)
{
	int	max;
	int	count;
	int	row;

	max = 0;
	count = 0;
	row = 0;

	while (row < 4)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		row++;
	}

	return (count);
}

/*
 * Count buildings visible from the BOTTOM.
 */
int	visible_down(int grid[4][4], int col)
{
	int	max;
	int	count;
	int	row;

	max = 0;
	count = 0;
	row = 3;

	while (row >= 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			count++;
		}
		row--;
	}

	return (count);
}

/*
 * Check if the completed grid
 * respects all 16 clues.
 *
 * Clues:
 *
 * 0 1 2 3  -> UP
 * 4 5 6 7  -> DOWN
 * 8 9 10 11 -> LEFT
 * 12 13 14 15 -> RIGHT
 */
int	check_grid(int grid[4][4], int clues[16])
{
	int	i;

	i = 0;

	/*
	 * Check rows.
	 */
	while (i < 4)
	{
		if (visible_left(grid, i) != clues[8 + i])
			return (0);

		if (visible_right(grid, i) != clues[12 + i])
			return (0);

		i++;
	}

	/*
	 * Check columns.
	 */
	i = 0;
	while (i < 4)
	{
		if (visible_up(grid, i) != clues[i])
			return (0);

		if (visible_down(grid, i) != clues[4 + i])
			return (0);

		i++;
	}

	return (1);
}

/*
 * BACKTRACKING.
 *
 * 'position' tells us which square
 * we are currently filling.
 *
 * Position:
 *
 *  0  1  2  3
 *  4  5  6  7
 *  8  9 10 11
 * 12 13 14 15
 */
int	solve(int grid[4][4], int clues[16], int position)
{
	int	row;
	int	col;
	int	number;

	/*
	 * We filled all 16 squares.
	 *
	 * Now check the visibility clues.
	 */
	if (position == 16)
	{
		if (check_grid(grid, clues))
			return (1);

		return (0);
	}

	/*
	 * Convert position to row and column.
	 *
	 * Example:
	 *
	 * position = 6
	 *
	 * 6 / 4 = 1 -> row 1
	 * 6 % 4 = 2 -> column 2
	 */
	row = position / 4;
	col = position % 4;

	/*
	 * Try numbers 1, 2, 3 and 4.
	 */
	number = 1;
	while (number <= 4)
	{
		/*
		 * Can we put this number here?
		 */
		if (can_put(grid, row, col, number))
		{
			/*
			 * Put the number.
			 */
			grid[row][col] = number;

			/*
			 * Try to solve the next square.
			 */
			if (solve(grid, clues, position + 1))
				return (1);

			/*
			 * It didn't work.
			 *
			 * Remove the number
			 * and try another one.
			 */
			grid[row][col] = 0;
		}

		number++;
	}

	/*
	 * No number worked.
	 */
	return (0);
}

int	main(int argc, char **argv)
{
	int	*clues;
	int	grid[4][4];
	int	row;
	int	col;

	/*
	 * We need exactly one argument.
	 */
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}

	/*
	 * Allocate memory for 16 clues.
	 */
	clues = malloc(sizeof(int) * 16);
	if (clues == NULL)
	{
		ft_putstr("Error\n");
		return (0);
	}

	/*
	 * Check and parse the input.
	 */
	if (!parse_input(argv[1], clues))
	{
		free(clues);
		ft_putstr("Error\n");
		return (0);
	}

	/*
	 * Initialize the grid with 0.
	 */
	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}

     4 3 2 1 
     4
     
	/*
	 * Start solving.
	 */
	if (solve(grid, clues, 0))
		print_grid(grid);
	else
		ft_putstr("Error\n");

	/*
	 * Free allocated memory.
	 */
	free(clues);

	return (0);
}