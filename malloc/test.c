#include <stdio.h>

int	main(void)
{
	char	*str;
	int		i;

	str = "Hello";

	printf("str      = %s\n", str);
	printf("*str     = %c\n", *str);
	printf("str[0]   = %c\n", str[0]);
	printf("str[1]   = %c\n", str[1]);

	i = 0;
	while (str[i] != '\0')
	{
		printf("str[%d] = %c\n", i, str[i]);
		i++;
	}

	return (0);
}