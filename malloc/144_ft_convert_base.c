#include <stdio.h>
#include <stdlib.h>

char	*ft_putnbr_base(int nbr, char *base_to)
{
	char	*result;
	long	number;
	int		base_len;
	int		len;
	int		sign;
	int		i;

	/* Calculate the length of the base. */
	base_len = 0;
	while (base_to[base_len] != '\0')
		base_len++;

	/* Convert int to long to handle INT_MIN. */
	number = nbr;

	/* Remember if the number is negative. */
	sign = 1;
	if (number < 0)
	{
		sign = -1;
		number = -number;
	}

	/* Count the digits. */
	len = 0;
	if (number == 0)
		len = 1;
	else
	{
		while (number > 0)
		{
			number = number / base_len;
			len++;
		}
	}

	/* Add one character for '-' if needed. */
	if (sign == -1)
		len++;

	/* Allocate memory for digits + '\0'. */
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);

	/* Put '\0' at the end. */
	result[len] = '\0';

	/* Start from the last position. */
	i = len - 1;

	/* Reset number because we changed it while counting. */
	number = nbr;
	if (number < 0)
		number = -number;

	/* Put the digits into result backwards. */
	while (number > 0)
	{
		result[i] = base_to[number % base_len];
		number = number / base_len;
		i--;
	}

	/* Special case for zero. */
	if (nbr == 0)
		result[0] = base_to[0];

	/* Put '-' before the digits. */
	if (sign == -1)
		result[0] = '-';

	return (result);
}

int	main(void)
{
	char	*result;

	result = ft_putnbr_base(25, "0123456789");
	printf("25 decimal = %s\n", result);
	free(result);

	result = ft_putnbr_base(-25, "0123456789");
	printf("-25 decimal = %s\n", result);
	free(result);

	result = ft_putnbr_base(25, "01");
	printf("25 decimal = %s binary\n", result);
	free(result);

	result = ft_putnbr_base(-25, "01");
	printf("-25 decimal = %s binary\n", result);
	free(result);

	result = ft_putnbr_base(255, "0123456789ABCDEF");
	printf("255 decimal = %s hexadecimal\n", result);
	free(result);

	result = ft_putnbr_base(-255, "0123456789ABCDEF");
	printf("-255 decimal = %s hexadecimal\n", result);
	free(result);

	result = ft_putnbr_base(0, "01");
	printf("0 decimal = %s binary\n", result);
	free(result);

	return (0);
}