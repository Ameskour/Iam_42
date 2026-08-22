/*
1 → valid
0 → invalid

'0' with '1' → different
'0' with '2' → different
'0' with '3' → different
'0' with '0' → SAME ❌

0 → compare with 1,2,3
1 → compare with 2,3
2 → compare with 3
3 → nothing

*/
#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;

	/* Base must have at least 2 characters. */
	if (base[0] == '\0' || base[1] == '\0')
		return (0);

	/* Check every character. */
	while (base[i] != '\0')
	{
		/* '+' '-' and whitespace are not allowed. */
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || base[i] == '\t'
			|| base[i] == '\n')
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

int	main(void)
{
	printf("%d\n", check_base("01"));
	printf("%d\n", check_base("0123456789"));
	printf("%d\n", check_base("001"));
	printf("%d\n", check_base("012+3"));
	printf("%d\n", check_base("0"));
	printf("%d\n", check_base("0123456789ABCDEF"));

	return (0);
}