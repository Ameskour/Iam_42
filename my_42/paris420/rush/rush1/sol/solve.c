/*
 * Functions from other files.
 */
int	check_solution(int grid[4][4], int clues[16]);

/*
 * Check if we can put a number in a position.
 *
 * Example:
 *
 * row = 1
 * col = 2
 * value = 3
 *
 * We check:
 *
 * - Is 3 already in this row?
 * - Is 3 already in this column?
 *
 * If yes -> cannot place it.
 * If no  -> can place it.
 */
static int	can_place(int grid[4][4], int row, int col, int value)
{
	int	i;

	i = 0;

	while (i < 4)
	{
		/*
		 * Check the row.
		 */
		if (grid[row][i] == value)
			return (0);

		/*
		 * Check the column.
		 */
		if (grid[i][col] == value)
			return (0);

		i++;
	}

	return (1);
}

/*
 * Backtracking function.
 *
 * pos represents the current position
 * inside the 4x4 grid.
 *
 * Positions:
 *
 *  0  1  2  3
 *  4  5  6  7
 *  8  9 10 11
 * 12 13 14 15
 */
static int	solve_position(int grid[4][4], int clues[16], int pos)
{
	int	row;
	int	col;
	int	value;

	/*
	 * If pos == 16, we filled the entire grid.
	 *
	 * Now check whether the visibility
	 * clues are correct.
	 */
	if (pos == 16)
	{
		if (check_solution(grid, clues))
			return (1);

		return (0);
	}

	/*
	 * Convert the position number into
	 * row and column.
	 *
	 * Example:
	 *
	 * pos = 6
	 *
	 * 6 / 4 = 1 -> row 1
	 * 6 % 4 = 2 -> col 2
	 */
	row = pos / 4;
	col = pos % 4;

	/*
	 * Try every possible building:
	 *
	 * 1
	 * 2
	 * 3
	 * 4
	 */
	value = 1;

	while (value <= 4)
	{
		/*
		 * Check if this value can be placed.
		 */
		if (can_place(grid, row, col, value))
		{
			/*
			 * Put the number in the grid.
			 */
			grid[row][col] = value;

			/*
			 * Move to the next position.
			 *
			 * If the recursive call finds
			 * a solution, return 1.
			 */
			if (solve_position(grid, clues, pos + 1))
				return (1);

			/*
			 * The choice didn't work.
			 *
			 * Remove the number and try
			 * another value.
			 *
			 * This is BACKTRACKING.
			 */
			grid[row][col] = 0;
		}

		value++;
	}

	/*
	 * None of the values 1-4 worked.
	 */
	return (0);
}

/*
 * Start the backtracking algorithm
 * from position 0.
 */
int	solve(int grid[4][4], int clues[16])
{
	return (solve_position(grid, clues, 0));
}