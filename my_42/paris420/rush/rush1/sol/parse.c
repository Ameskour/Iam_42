/*
 * Converts the input string into 16 integers.
 *
 * Example:
 *
 * "4 3 2 1 ..."
 *
 * becomes:
 *
 * clues[0] = 4
 * clues[1] = 3
 * clues[2] = 2
 * clues[3] = 1
 * ...
 *
 * Every clue must be between 1 and 4.
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
		 * We cannot have more than 16 clues.
		 */
		if (count >= 16)
			return (0);

		/*
		 * Every clue must be a character
		 * between '1' and '4'.
		 */
		if (str[i] < '1' || str[i] > '4')
			return (0);

		/*
		 * Convert ASCII character to integer.
		 *
		 * '1' - '0' = 1
		 * '2' - '0' = 2
		 * etc.
		 */
		clues[count] = str[i] - '0';

		count++;
		i++;

		/*
		 * If there are more clues,
		 * the next character must be a space.
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