#include <stdio.h>

int	main(void)
{
	int	number;
	int	base;
	int	digits[32];
	int	i;

	/* The number we want to convert. */
	number = 25;

	/* We want binary, so the base is 2. */
	base = 2;

	/* Start at the first position of the array. */
	i = 0;

	/*
	** Get the remainders.
	**
	** 25 % 2 = 1
	** 12 % 2 = 0
	**  6 % 2 = 0
	**  3 % 2 = 1
	**  1 % 2 = 1
	*/
	while (number > 0)
	{
		/* Get the next digit (remainder). */
		digits[i] = number % base;

		/* Make the number smaller. */
		number = number / base;

		i++;
		
	}

	/*
	** The digits are stored backwards:
	**
	** digits = 1 0 0 1 1
	**
	** We need to print them backwards:
	**
	** 1 1 0 0 1
	*/
	printf("Binary: ");

	while (i > 0)
	{
		/* Move to the previous digit. */
		i--;

		/* Print the digit. */
		printf("%d", digits[i]);
	}

	printf("\n");

	return (0);
}
// number = 25;

// digit = number % 2;  // 1
// number = number / 2; // 12

// digit = number % 2;  // 0
// number = number / 2; // 6

// digit = number % 2;  // 0
// number = number / 2; // 3

// digit = number % 2;  // 1
// number = number / 2; // 1

// digit = number % 2;  // 1
// number = number / 2; // 0

// remainders: 1 0 0 1 1
// read reverse: 1 1 0 0 1
//               ↓
//              11001