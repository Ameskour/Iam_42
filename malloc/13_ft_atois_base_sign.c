#include <stdio.h>
/*
Now let's handle the sign and whitespace in nbr.

The exercise allows the number to have whitespace before it and signs before the number. 
The important idea is:  skip whitespace, then count +/-, then convert the digits.
"   -11001"
     ↓
   -25

   "  +11001"
     ↓
    25
*/


/*
1. check_base()
        ↓
2. skip whitespace
        ↓
3. handle + / -
        ↓
4. string → int
        ↓
5. int → string in base_to
        ↓
6. malloc
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
	** Skip whitespace.
	**
	** ' '  = space
	** '\t' = tab
	** '\n' = new line
	** '\v' = vertical tab
	** '\f' = form feed
	** '\r' = carriage return
	*/
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;

	/*
	** Read the signs.
	**
	** '-' changes the sign.
	** '+' does not change the sign.
	*/
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
			sign = -sign;
		i++;
	}

	/*
	** Convert the digits.
	*/
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

int	main(void)
{
	printf("%d\n", ft_atoi_base("11001", "01"));
	printf("%d\n", ft_atoi_base("-11001", "01"));
	printf("%d\n", ft_atoi_base("+11001", "01"));
	printf("%d\n", ft_atoi_base("   -11001", "01"));
	printf("%d\n", ft_atoi_base("  +11001", "01"));
	printf("%d\n", ft_atoi_base("--11001", "01"));
	printf("%d\n", ft_atoi_base("-+11001", "01"));

	return (0);
}