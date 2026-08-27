/*
 * Functions from other files.
 */
int	count_left(int grid[4][4], int row);
int	count_right(int grid[4][4], int row);
int	count_up(int grid[4][4], int col);
int	count_down(int grid[4][4], int col);

int	check_row(int grid[4][4], int row);
int	check_col(int grid[4][4], int col);

/*
 * Check all 4 rows.
 *
 * Clues:
 *
 * clues[8]  = row 1 from LEFT
 * clues[9]  = row 2 from LEFT
 * clues[10] = row 3 from LEFT
 * clues[11] = row 4 from LEFT
 *
 * clues[12] = row 1 from RIGHT
 * clues[13] = row 2 from RIGHT
 * clues[14] = row 3 from RIGHT
 * clues[15] = row 4 from RIGHT
 */
int	check_rows(int grid[4][4], int clues[16])
{
	int	row;

	row = 0;

	while (row < 4)
	{
		/*
		 * First check that there are
		 * no duplicate numbers.
		 */
		if (!check_row(grid, row))
			return (0);

		/*
		 * Check the LEFT clue.
		 */
		if (count_left(grid, row) != clues[8 + row])
			return (0);

		/*
		 * Check the RIGHT clue.
		 */
		if (count_right(grid, row) != clues[12 + row])
			return (0);

		row++;
	}

	return (1);
}

/*
 * Check all 4 columns.
 *
 * Clues:
 *
 * clues[0] = column 1 from UP
 * clues[1] = column 2 from UP
 * clues[2] = column 3 from UP
 * clues[3] = column 4 from UP
 *
 * clues[4] = column 1 from DOWN
 * clues[5] = column 2 from DOWN
 * clues[6] = column 3 from DOWN
 * clues[7] = column 4 from DOWN
 */
int	check_columns(int grid[4][4], int clues[16])
{
	int	col;

	col = 0;

	while (col < 4)
	{
		/*
		 * Check duplicate numbers.
		 */
		if (!check_col(grid, col))
			return (0);

		/*
		 * Check the UP clue.
		 */
		if (count_up(grid, col) != clues[col])
			return (0);

		/*
		 * Check the DOWN clue.
		 */
		if (count_down(grid, col) != clues[4 + col])
			return (0);

		col++;
	}

	return (1);
}

/*
 * Check the complete solution.
 *
 * The solution is valid only if:
 *
 * 1. All rows are valid.
 * 2. All columns are valid.
 * 3. All visibility clues are correct.
 */
int	check_solution(int grid[4][4], int clues[16])
{
	if (!check_rows(grid, clues))
		return (0);

	if (!check_columns(grid, clues))
		return (0);

	return (1);
}