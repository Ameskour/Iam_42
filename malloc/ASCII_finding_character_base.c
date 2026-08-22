#include <stdio.h>

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

int	main(void)
{
	char	*base;
	int		result;

	base = "0123456789ABCDEF";

	result = find_char('B', base);
	printf("%d\n", result);

	result = find_char('F', base);
	printf("%d\n", result);

	result = find_char('7', base);
	printf("%d\n", result);

	return (0);
}

/*
base = "0123456789ABCDEF"

i = 0 → '0' == 'B'? NO
i = 1 → '1' == 'B'? NO
i = 2 → '2' == 'B'? NO
...
i = 10 → 'A' == 'B'? NO
i = 11 → 'B' == 'B'? YES
*/