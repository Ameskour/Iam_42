#include <stdlib.h>

/*
** Find the position of character c inside base.
**
** Example:
**
** base = "0123456789"
**
** find_char('5', base)
**       ↓
**       5
**
** If the character doesn't exist:
** return -1
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
** Check if a base is valid.
**
** A valid base:
** - has at least 2 characters
** - has no '+'
** - has no '-'
** - has no whitespace
** - has no duplicate characters
**
** Example:
**
** "01"       -> valid
** "0123456789" -> valid
** "001"      -> invalid
** "01+"      -> invalid
** "01 23"    -> invalid
*/
int	check_base(char *base)
{
	int	i;
	int	j;

	/*
	** Count the characters in the base.
	*/
	i = 0;
	while (base[i] != '\0')
		i++;

	/*
	** A base needs at least 2 characters.
	**
	** ""  -> invalid
	** "0" -> invalid
	** "01" -> valid
	*/
	if (i < 2)
		return (0);

	i = 0;

	while (base[i] != '\0')
	{
		/*
		** '+' and '-' cannot be inside the base.
		*/
		if (base[i] == '+' || base[i] == '-')
			return (0);

		/*
		** Check for whitespace.
		**
		** ' '  = space
		** 9-13 = tab, newline, etc.
		*/
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13))
			return (0);

		/*
		** Check for duplicate characters.
		**
		** Example:
		** base = "001"
		**
		** base[0] = '0'
		** base[1] = '0'
		**
		** Duplicate -> invalid.
		*/
		j = i + 1;

		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);

			j++;
		}

		i++;
	}

	/*
	** Everything is OK.
	*/
	return (1);
}

/*
** Convert a string from a base to an integer.
**
** Example:
**
** nbr       = "11001"
** base_from = "01"
**
** Result:
** 25
**
** Because:
**
** 1 * 2^4 = 16
** 1 * 2^3 =  8
** 0 * 2^2 =  0
** 0 * 2^1 =  0
** 1 * 2^0 =  1
**
** 16 + 8 + 1 = 25
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

	/*
	** Calculate the length of the base.
	**
	** Example:
	** "01"
	**
	** base_len = 2
	*/
	base_len = 0;

	while (base_from[base_len] != '\0')
		base_len++;

	/*
	** Skip whitespace before the number.
	**
	** Example:
	**
	** "   101"
	**    ↑
	** skip these spaces
	*/
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;

	/*
	** Read the signs.
	**
	** '-' changes the sign.
	** '+' doesn't change the sign.
	**
	** Example:
	**
	** "-25"  -> sign = -1
	** "+25"  -> sign =  1
	** "--25" -> sign =  1
	*/
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;

		i++;
	}

	/*
	** Read every digit.
	*/
	while (nbr[i] != '\0')
	{
		/*
		** Find the position of the character
		** in the base.
		**
		** Example:
		**
		** base = "0123456789"
		** nbr[i] = '5'
		**
		** digit = 5
		*/
		digit = find_char(nbr[i], base_from);

		/*
		** Character is not part of the base.
		** Stop converting.
		*/
		if (digit == -1)
			break;

		/*
		** Build the number.
		**
		** Example:
		**
		** base = 10
		**
		** reading "25":
		**
		** result = 0
		**
		** result = 0 * 10 + 2
		**        = 2
		**
		** result = 2 * 10 + 5
		**        = 25
		*/
		result = result * base_len + digit;

		i++;
	}

	/*
	** Apply the sign.
	**
	** Example:
	**
	** result = 25
	** sign = -1
	**
	** return -25
	*/
	return (result * sign);
}

/*
** Count how many characters are needed to represent
** a number in a particular base.
**
** Example:
**
** number = 25
** base = 2
**
** 25 / 2 = 12
** 12 / 2 = 6
**  6 / 2 = 3
**  3 / 2 = 1
**  1 / 2 = 0
**
** We divided 5 times.
**
** Therefore:
** 25 binary needs 5 digits.
*/
int	count_digits(long number, int base_len)
{
	int	count;

	count = 0;

	/*
	** Zero needs one character.
	**
	** 0 -> "0"
	*/
	if (number == 0)
		return (1);

	while (number > 0)
	{
		number = number / base_len;
		count++;
	}

	return (count);
}

/*
** Convert an integer to a string using base_to.
**
** Example:
**
** nbr = 25
** base_to = "01"
**
** Result:
**
** "11001"
**
** Example:
**
** nbr = 255
** base_to = "0123456789ABCDEF"
**
** Result:
**
** "FF"
*/
char	*ft_putnbr_base(int nbr, char *base_to)
{
	char	*result;
	long	number;
	int		base_len;
	int		len;
	int		sign;
	int		i;

	/*
	** Calculate the length of the target base.
	**
	** "01" -> 2
	** "0123456789" -> 10
	** "0123456789ABCDEF" -> 16
	*/
	base_len = 0;

	while (base_to[base_len] != '\0')
		base_len++;

	/*
	** Convert nbr to long.
	**
	** We use long because of INT_MIN:
	**
	** -2147483648
	**
	** Its positive value doesn't fit in an int.
	*/
	number = nbr;

	/*
	** Remember if the number is negative.
	*/
	sign = 1;

	if (number < 0)
	{
		sign = -1;
		number = -number;
	}

	/*
	** Count how many digits we need.
	**
	** Example:
	**
	** 25 in binary
	** -> 5 digits
	*/
	len = count_digits(number, base_len);

	/*
	** If the number is negative,
	** we need one extra character for '-'.
	**
	** 25  -> "11001"  = 5
	** -25 -> "-11001" = 6
	*/
	if (sign == -1)
		len++;

	/*
	** Allocate:
	**
	** digits + optional '-' + '\0'
	*/
	result = malloc(len + 1);

	if (result == NULL)
		return (NULL);

	/*
	** Put '\0' at the end.
	*/
	result[len] = '\0';

	/*
	** Start writing from the last position.
	**
	** Why?
	**
	** The remainder gives us the last digit first.
	**
	** Example:
	**
	** 25 % 2 = 1
	** 12 % 2 = 0
	**  6 % 2 = 0
	**  3 % 2 = 1
	**  1 % 2 = 1
	**
	** We get:
	**
	** 1 0 0 1 1
	**
	** But the answer is:
	**
	** 1 1 0 0 1
	**
	** So we fill the string backwards.
	*/
	i = len - 1;

	/*
	** Put the digits into result.
	*/
	while (number > 0)
	{
		/*
		** Get the digit using remainder.
		**
		** Example:
		**
		** 25 % 2 = 1
		**
		** base_to[1] = '1'
		*/
		result[i] = base_to[number % base_len];

		/*
		** Make number smaller.
		**
		** Example:
		**
		** 25 / 2 = 12
		*/
		number = number / base_len;

		i--;
	}

	/*
	** Special case for zero.
	**
	** 0 -> "0"
	*/
	if (nbr == 0)
		result[0] = base_to[0];

	/*
	** Put '-' at the beginning if necessary.
	**
	** -25 -> "-11001"
	*/
	if (sign == -1)
		result[0] = '-';

	return (result);
}