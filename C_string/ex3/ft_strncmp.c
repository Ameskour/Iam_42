#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("Hello", "Hello", 5));
	printf("%d\n", ft_strncmp("Hello", "World", 5));
	printf("%d\n", ft_strncmp("Hello", "Help", 3));
	printf("%d\n", ft_strncmp("Hello", "Help", 4));
	return (0);
}