#include <stdlib.h>

/*
** Find the position of a character in the base.
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
** Convert nbr from base_from to an integer.
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

	/* Skip whitespace. */
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;

	/* Read '+' and '-' signs. */
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}

	/* Convert the digits. */
	while (nbr[i] != '\0')
	{
		digit = find_char(nbr[i], base_from);

		if (digit == -1)
			break;

		result = result * base_len + digit;
		i++;
	}

	return (result * sign);
}

/*
** Check if the base is valid.
**
** Return:
** 1 = valid
** 0 = invalid
*/
int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;

	/* Base must contain at least 2 characters. */
	while (base[i] != '\0')
		i++;

	if (i < 2)
		return (0);

	i = 0;
	while (base[i] != '\0')
	{
		/* '+' and '-' are forbidden. */
		if (base[i] == '+' || base[i] == '-')
			return (0);

		/* Whitespace is forbidden. */
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);

		/* Check for duplicate characters. */
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*
** Count how many digits are needed.
*/
int	count_digits(int nbr, int base_len)
{
	int	count;

	count = 0;

	if (nbr == 0)
		return (1);

	while (nbr > 0)
	{
		nbr = nbr / base_len;
		count++;
	}
	return (count);
}

/*
** Convert an integer to a string using base_to.
*/
char	*ft_putnbr_base(int nbr, char *base_to)
{
	char	*result;
	int		base_len;
	int		len;
	int		i;

	/* Calculate the base length. */
	base_len = 0;
	while (base_to[base_len] != '\0')
		base_len++;

	/* Count the required digits. */
	len = count_digits(nbr, base_len);

	/* Allocate memory for digits + '\0'. */
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);

	/* Put '\0' at the end. */
	result[len] = '\0';

	/* Start from the last digit. */
	i = len - 1;

	/* Convert the number. */
	while (nbr > 0)
	{
		result[i] = base_to[nbr % base_len];
		nbr = nbr / base_len;
		i--;
	}

	/* Special case: nbr == 0. */
	if (len == 1)
		result[0] = base_to[0];

	return (result);
}

/*
** Convert nbr from base_from to base_to.
*/
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	/* Check both bases. */
	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);

	/* Convert nbr to an integer. */
	number = ft_atoi_base(nbr, base_from);

	/* Convert the integer to base_to. */
	result = ft_putnbr_base(number, base_to);

	return (result);
}



#include <stdio.h>

int	main(void)
{
	char	*result;

	result = ft_convert_base("11001", "01", "0123456789");
	printf("11001 binary -> %s decimal\n", result);
	free(result);

	result = ft_convert_base("25", "0123456789", "01");
	printf("25 decimal -> %s binary\n", result);
	free(result);

	result = ft_convert_base("11001", "01", "0123456789ABCDEF");
	printf("11001 binary -> %s hexadecimal\n", result);
	free(result);

	result = ft_convert_base("19", "0123456789ABCDEF", "0123456789");
	printf("19 hexadecimal -> %s decimal\n", result);
	free(result);

	result = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
	printf("255 decimal -> %s hexadecimal\n", result);
	free(result);

	result = ft_convert_base("-11001", "01", "0123456789");
	printf("-11001 binary -> %s decimal\n", result);
	free(result);

	return (0);
}