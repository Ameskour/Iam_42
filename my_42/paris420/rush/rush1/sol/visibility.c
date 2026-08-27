/*
 * Count buildings visible from the LEFT.
 *
 * Example:
 *
 * 1 2 3 4
 *
 * Start with max = 0.
 *
 * 1 > 0 -> visible
 * 2 > 1 -> visible
 * 3 > 2 -> visible
 * 4 > 3 -> visible
 *
 * Result = 4
 */
int	count_left(int grid[4][4], int row)
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
 *
 * Example:
 *
 * 1 2 3 4
 *
 * Looking from the right:
 *
 * 4 -> visible
 * 3 -> hidden
 * 2 -> hidden
 * 1 -> hidden
 *
 * Result = 1
 */
int	count_right(int grid[4][4], int row)
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
 *
 * We move from row 0 to row 3.
 */
int	count_up(int grid[4][4], int col)
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
 *
 * We move from row 3 to row 0.
 */
int	count_down(int grid[4][4], int col)
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