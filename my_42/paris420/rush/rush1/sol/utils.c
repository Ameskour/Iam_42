#include <unistd.h>

/*
 * Prints a string character by character.
 *
 * We use write() because printf() is not allowed.
 */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
 * Prints one character.
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}