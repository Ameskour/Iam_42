/*
 * Checks if a row contains duplicate numbers.
 *
 * Example:
 *
 * 1 2 3 4 -> valid
 *
 * 1 2 2 4 -> invalid
 */
int	check_row(int grid[4][4], int row)
{
	int	seen[5];
	int	col;
	int	value;

	/*
	 * seen[1] tells us if we already used 1.
	 * seen[2] tells us if we already used 2.
	 * etc.
	 */
	col = 0;
	while (col < 5)
	{
		seen[col] = 0;
		col++;
	}

	col = 0;
	while (col < 4)
	{
		value = grid[row][col];

		/*
		 * 0 means the position is empty,
		 * so we ignore it.
		 */
		if (value != 0)
		{
			/*
			 * If we already saw this number,
			 * there is a duplicate.
			 */
			if (seen[value])
				return (0);

			seen[value] = 1;
		}

		col++;
	}

	return (1);
}

/*
 * Checks if a column contains duplicate numbers.
 */
int	check_col(int grid[4][4], int col)
{
	int	seen[5];
	int	row;
	int	value;

	/*
	 * Reset seen array.
	 */
	row = 0;
	while (row < 5)
	{
		seen[row] = 0;
		row++;
	}

	row = 0;
	while (row < 4)
	{
		value = grid[row][col];

		if (value != 0)
		{
			/*
			 * Duplicate number found.
			 */
			if (seen[value])
				return (0);

			seen[value] = 1;
		}

		row++;
	}

	return (1);
}