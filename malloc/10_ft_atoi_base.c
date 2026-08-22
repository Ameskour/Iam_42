#include <stdio.h>

/*
** Find the position of a character inside the base.
**
** Example:
** base = "0123456789"
** find_char('5', base) returns 5
**
** If the character is not found, return -1.
*/
int	find_char(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/*
** Convert a number written as a string
** into an integer.
**
** Example:
** "11001" with base "01"
** becomes 25.
*/
int	ft_atoi_base(char *nbr, char *base_from)
{
	int	result;
	int	base_len;
	int	digit;
	int	i;

	/* Start the result at 0. */
	result = 0;

	/* Start at the first character of nbr. */
	i = 0;

	/* Calculate the length of the base. */
	base_len = 0;
	while (base_from[base_len] != '\0')
		base_len++;

	/*
	** Read nbr one character at a time.
	**
	** Example:
	** nbr = "11001"
	**
	** First:  '1'
	** Second: '1'
	** Third:  '0'
	** Fourth: '0'
	** Fifth:  '1'
	*/
	while (nbr[i] != '\0')
	{
		/*
		** Find the position of the character
		** inside the base.
		**
		** Example:
		** base = "01"
		** nbr[i] = '1'
		**
		** find_char('1', "01") = 1
		*/
		digit = find_char(nbr[i], base_from);

		/*
		** If the character is not inside
		** the base, stop reading.
		*/
		if (digit == -1)
			break;

		/*
		** Move the previous result to the left
		** and add the new digit.
		**
		** Example:
		** result = 3
		** base_len = 2
		** digit = 0
		**
		** result = 3 * 2 + 0
		**        = 6
		*/
		result = result * base_len + digit;

		/* Move to the next character. */
		i++;
	}

	/* Return the final integer. */
	return (result);
}

int	main(void)
{
	int	result;

	/* Binary: 11001 = 25 */
	result = ft_atoi_base("11001", "01");
	printf("11001 binary = %d\n", result);

	/* Binary: 101 = 5 */
	result = ft_atoi_base("101", "01");
	printf("101 binary = %d\n", result);

	/* Decimal: 25 = 25 */
	result = ft_atoi_base("25", "0123456789");
	printf("25 decimal = %d\n", result);

	/* Decimal: 1234 = 1234 */
	result = ft_atoi_base("1234", "0123456789");
	printf("1234 decimal = %d\n", result);

	/* Hexadecimal: 19 = 25 */
	result = ft_atoi_base("19", "0123456789ABCDEF");
	printf("19 hexadecimal = %d\n", result);

	/* Hexadecimal: FF = 255 */
	result = ft_atoi_base("FF", "0123456789ABCDEF");
	printf("FF hexadecimal = %d\n", result);

	/* Hexadecimal: 1A = 26 */
	result = ft_atoi_base("1A", "0123456789ABCDEF");
	printf("1A hexadecimal = %d\n", result);

	/* Octal: 31 = 25 */
	result = ft_atoi_base("31", "01234567");
	printf("31 octal = %d\n", result);

	/* Poney base: "poneyvif" */
	result = ft_atoi_base("ep", "poneyvif");
	printf("ep poneyvif = %d\n", result);

	/* Invalid character: stops at X */
	result = ft_atoi_base("123X45", "0123456789");
	printf("123X45 = %d\n", result);

	return (0);
}