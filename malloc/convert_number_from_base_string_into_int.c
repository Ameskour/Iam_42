#include <stdio.h>

/*
** Get the number of characters in the base.
*/
int	base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

/*
** Find the position of a character inside the base.
**
** Example:
** base = "0123456789ABCDEF"
** 'A' = 10
** 'F' = 15
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
	return (-1); //NOT FOUND 
}

/*
** Convert a number from a given base to an int.
**
** Example:
** "1010" with base "01" -> 10
*/
int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	digit;
	int	b_len;

	i = 0;
	sign = 1;
	result = 0;

	/* Get the size of the base. */
	b_len = base_len(base);

	/* Skip whitespace at the beginning. */
	while (nbr[i] == ' ' || nbr[i] == '\t'
		|| nbr[i] == '\n')
		i++;

	/* Read the signs. */
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = sign * -1;
		i++;
	}

	/* Convert each character into its numeric value. */
	while (nbr[i] != '\0')
	{
		digit = find_char(nbr[i], base);

		/* Stop if the character isn't in the base. */
		if (digit == -1)
			break;

		/*
		** Move the previous result to the next position
		** and add the value of the current digit.
		*/
		result = result * b_len + digit;
		i++;
	}

	/* Apply the sign at the end. */
	return (result * sign);
}

int	main(void)
{
	printf("%d\n", ft_atoi_base("1010", "01"));
	printf("%d\n", ft_atoi_base("101", "01"));
	printf("%d\n", ft_atoi_base("FF", "0123456789ABCDEF"));
	printf("%d\n", ft_atoi_base("-FF", "0123456789ABCDEF"));

	return (0);
}