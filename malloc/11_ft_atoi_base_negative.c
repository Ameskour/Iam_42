#include <stdio.h>

/*
** Find the position of a character in the base.
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
** Convert a number from a string to an integer.
**
** This version also handles '-'.
*/
int	ft_atoi_base(char *nbr, char *base_from)
{
	int	result;
	int	base_len;
	int	digit;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;

	/* Calculate the length of the base. */
	base_len = 0;
	while (base_from[base_len] != '\0')
		base_len++;

	/*
	** Check if the number starts with '-'.
	*/
	if (nbr[0] == '-')
	{
		sign = -1;
		nbr++;
	}

	/*
	** Convert the number.
	*/
	while (nbr[i] != '\0')
	{
		digit = find_char(nbr[i], base_from);

		if (digit == -1)
			break;

		result = result * base_len + digit;
		i++;
	}

	/* Apply the sign at the end. */
	return (result * sign);
}

int	main(void)
{
	int	result;

	result = ft_atoi_base("11001", "01");
	printf("11001 = %d\n", result);

	result = ft_atoi_base("-11001", "01");
	printf("-11001 = %d\n", result);

	result = ft_atoi_base("19", "0123456789ABCDEF");
	printf("19 hex = %d\n", result);

	result = ft_atoi_base("-19", "0123456789ABCDEF");
	printf("-19 hex = %d\n", result);

	return (0);
}