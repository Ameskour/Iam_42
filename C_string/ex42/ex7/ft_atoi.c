#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	/* Skip whitespace: space, tab, newline, etc. */
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	/* Read all '+' and '-' signs */
	while (str[i] == '+' || str[i] == '-')
	{
		/* Each '-' changes the sign */
		if (str[i] == '-')
			sign = -sign;
		i++;
	}

	/* Convert each digit into an integer */
	while (str[i] >= '0' && str[i] <= '9')
	{
		/* Move previous digits one position to the left */
		/* and add the new digit */
		result = result * 10 + (str[i] - '0');
		i++;
	}

	/* Apply the final sign to the number */
	return (result * sign);
}
int	main(void)
{
	char	*str;

	str = "   ---++-1234abc567";
	printf("%d\n", ft_atoi(str));
	return (0);
}