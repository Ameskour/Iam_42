#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(void)
{
	char	*result;

	/*
	** TEST 1
	** Binary -> Decimal
	**
	** 11001 binary = 25 decimal
	*/
	result = ft_convert_base("11001", "01", "0123456789");
	printf("TEST 1: %s\n", result);
	free(result);

	/*
	** TEST 2
	** Decimal -> Binary
	**
	** 25 decimal = 11001 binary
	*/
	result = ft_convert_base("25", "0123456789", "01");
	printf("TEST 2: %s\n", result);
	free(result);

	/*
	** TEST 3
	** Binary -> Hexadecimal
	**
	** 11001 binary = 19 hexadecimal
	*/
	result = ft_convert_base("11001", "01",
			"0123456789ABCDEF");
	printf("TEST 3: %s\n", result);
	free(result);

	/*
	** TEST 4
	** Hexadecimal -> Decimal
	**
	** 19 hexadecimal = 25 decimal
	*/
	result = ft_convert_base("19",
			"0123456789ABCDEF",
			"0123456789");
	printf("TEST 4: %s\n", result);
	free(result);

	/*
	** TEST 5
	** Decimal -> Hexadecimal
	**
	** 255 decimal = FF hexadecimal
	*/
	result = ft_convert_base("255",
			"0123456789",
			"0123456789ABCDEF");
	printf("TEST 5: %s\n", result);
	free(result);

	/*
	** TEST 6
	** Negative Decimal -> Binary
	**
	** -25 decimal = -11001 binary
	*/
	result = ft_convert_base("-25",
			"0123456789",
			"01");
	printf("TEST 6: %s\n", result);
	free(result);

	/*
	** TEST 7
	** Negative Binary -> Decimal
	**
	** -11001 binary = -25 decimal
	*/
	result = ft_convert_base("-11001",
			"01",
			"0123456789");
	printf("TEST 7: %s\n", result);
	free(result);

	/*
	** TEST 8
	** Zero
	*/
	result = ft_convert_base("0",
			"0123456789",
			"01");
	printf("TEST 8: %s\n", result);
	free(result);

	/*
	** TEST 9
	** Spaces before the number
	**
	** "   25" -> 11001
	*/
	result = ft_convert_base("   25",
			"0123456789",
			"01");
	printf("TEST 9: %s\n", result);
	free(result);

	/*
	** TEST 10
	** Different base
	**
	** Octal 31 = decimal 25
	*/
	result = ft_convert_base("31",
			"01234567",
			"0123456789");
	printf("TEST 10: %s\n", result);
	free(result);

	/*
	** TEST 11
	** Poney base
	*/
	result = ft_convert_base("ep",
			"poneyvif",
			"0123456789");
	printf("TEST 11: %s\n", result);
	free(result);

	/*
	** TEST 12
	** Invalid base: duplicate character
	**
	** "001" is invalid.
	*/
	result = ft_convert_base("25",
			"0123456789",
			"001");

	if (result == NULL)
		printf("TEST 12: NULL (correct)\n");
	else
	{
		printf("TEST 12: %s (WRONG)\n", result);
		free(result);
	}

	/*
	** TEST 13
	** Invalid base: '+'
	*/
	result = ft_convert_base("25",
			"0123456789",
			"01+");

	if (result == NULL)
		printf("TEST 13: NULL (correct)\n");
	else
	{
		printf("TEST 13: %s (WRONG)\n", result);
		free(result);
	}

	/*
	** TEST 14
	** Invalid base: '-'
	*/
	result = ft_convert_base("25",
			"0123456789",
			"01-");

	if (result == NULL)
		printf("TEST 14: NULL (correct)\n");
	else
	{
		printf("TEST 14: %s (WRONG)\n", result);
		free(result);
	}

	/*
	** TEST 15
	** Invalid base: only one character
	*/
	result = ft_convert_base("25",
			"0123456789",
			"0");

	if (result == NULL)
		printf("TEST 15: NULL (correct)\n");
	else
	{
		printf("TEST 15: %s (WRONG)\n", result);
		free(result);
	}

	return (0);
}