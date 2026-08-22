#include <stdio.h>
#include <stdlib.h>

/*
1. Find the base length
       ↓
2. Find how many characters we need
       ↓
3. malloc the memory
       ↓
4. Convert using % and /
*/


/*
** Count how many digits are needed
** to represent the number in the given base.
*/
int	count_digits(int nbr, int base_len)
{
	int	count;

	count = 0;

	/* Special case: 0 needs one character. */
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
**
** Example:
** nbr = 25
** base_to = "01"
** result = "11001"
*/
char	*ft_putnbr_base(int nbr, char *base_to)
{
	char	*result;
	int		base_len;
	int		len;
	int		i;

	/* Get the length of the target base. */
	base_len = 0;
	while (base_to[base_len] != '\0')
		base_len++;

	/* Calculate how many characters we need. */
	len = count_digits(nbr, base_len);

	/* Allocate memory for the string + '\0'. */
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	/*
	** Put '\0' at the end of the string.
	*/
	result[len] = '\0'; //index:   0   1   2   3   4    5
                        //          ' ' ' ' ' ' ' ' ' '  '\0'

	/*
	** Start from the last position.
	** The remainders are generated backwards.
	*/
	i = len - 1; // bc of 5 is '\0'

	while (nbr > 0)
	{
		/*
		** Get the remainder.
		**
		** Example:
		** 25 % 2 = 1
		*/
		result[i] = base_to[nbr % base_len];

		/*
		** Make the number smaller.
		*/
		nbr = nbr / base_len;

		i--;
	}

	/*
	** Special case for number 0.
	*/
	if (len == 1)
		result[0] = base_to[0];

	return (result);
}

int	main(void)
{
	char	*result;

	/* 25 decimal -> binary */
	result = ft_putnbr_base(25, "01");
	printf("%s\n", result);
	free(result);

	/* 25 decimal -> decimal */
	result = ft_putnbr_base(25, "0123456789");
	printf("%s\n", result);
	free(result);

	/* 25 decimal -> hexadecimal */
	result = ft_putnbr_base(25, "0123456789ABCDEF");
	printf("%s\n", result);
	free(result);

	return (0);
}