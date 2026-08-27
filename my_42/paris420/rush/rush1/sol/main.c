#include <unistd.h>
#include <stdlib.h>

/*
 * Functions that are defined in other files.
 */
void	ft_putstr(char *str);
int		parse_input(char *str, int *clues);
int		solve(int grid[4][4], int clues[16]);
void	print_grid(int grid[4][4]);

int	main(int argc, char **argv)
{
	int	*clues;
	int	grid[4][4];
	int	i;
	int	j;

	/*
	 * The program must receive exactly 2 arguments:
	 *
	 * argv[0] = ./rush-01
	 * argv[1] = "4 3 2 1 ..."
	 */
	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}

	/*
	 * Allocate memory for the 16 clues.
	 *
	 * We have:
	 * 4 clues for UP
	 * 4 clues for DOWN
	 * 4 clues for LEFT
	 * 4 clues for RIGHT
	 */
	clues = malloc(sizeof(int) * 16);
	if (clues == NULL)
	{
		ft_putstr("Error\n");
		return (0);
	}

	/*
	 * Convert the input string into 16 integers.
	 *
	 * If the input is invalid, print Error.
	 */
	if (!parse_input(argv[1], clues))
	{
		free(clues);
		ft_putstr("Error\n");
		return (0);
	}

	/*
	 * Initialize the 4x4 grid with 0.
	 *
	 * 0 means that the position is empty.
	 */
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}

	/*
	 * Start the backtracking algorithm.
	 *
	 * If solve() finds a solution,
	 * print the grid.
	 *
	 * Otherwise, print Error.
	 */
	if (solve(grid, clues))
		print_grid(grid);
	else
		ft_putstr("Error\n");

	/*
	 * Free the memory allocated with malloc.
	 */
	free(clues);

	return (0);
}