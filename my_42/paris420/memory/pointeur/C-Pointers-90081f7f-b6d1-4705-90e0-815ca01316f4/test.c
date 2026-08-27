#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

void	ft_change(int *p)
{
	*p = 100;
}

int	main(void)
{
	int		a;
	int		*p;
	int		b;
	char	*s;

	a = 42;
	p = &a;

	ft_putnbr(a);
	ft_putchar('\n');

	ft_putnbr(*p);
	ft_putchar('\n');

	*p = 200;
	ft_putnbr(a);
	ft_putchar('\n');

	b = 43;
	ft_change(&b);

	ft_putnbr(b);
	ft_putchar('\n');

	ft_putnbr(*p);
	ft_putchar('\n');

	s = "Hello";
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}

	ft_putchar('\n');

	return (0);
}