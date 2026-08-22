#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	printf("1: %d\n", ft_strcmp("hello", "hello"));
	printf("2: %d\n", ft_strcmp("hello", "world"));
	printf("3: %d\n", ft_strcmp("world", "hello"));
	printf("4: %d\n", ft_strcmp("abc", "abcd"));
	printf("5: %d\n", ft_strcmp("", ""));
	printf("6: %d\n", ft_strcmp("abc", ""));
	printf("7: %d\n", ft_strcmp("", "abc"));
	return (0);
}