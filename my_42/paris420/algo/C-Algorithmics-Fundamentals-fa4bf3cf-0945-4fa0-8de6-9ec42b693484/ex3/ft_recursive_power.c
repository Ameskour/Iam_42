#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

int	main(void)
{
	ft_putnbr(ft_recursive_power(2, 4));
	ft_putchar('\n');

	ft_putnbr(ft_recursive_power(5, 3));
	ft_putchar('\n');

	ft_putnbr(ft_recursive_power(10, 0));
	ft_putchar('\n');

	ft_putnbr(ft_recursive_power(0, 0));
	ft_putchar('\n');

	ft_putnbr(ft_recursive_power(3, -2));
	ft_putchar('\n');

	return (0);
}