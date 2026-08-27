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
	char	*s;

	/* Part 1: int pointer */
	a = 42;
	p = &a;

	ft_putnbr(a);
	write(1, "\n", 1);

	ft_putnbr(*p);
	write(1, "\n", 1);

	/* Modify using variable */
	a = 50;

	ft_putnbr(a);
	write(1, "\n", 1);

	ft_putnbr(*p);
	write(1, "\n", 1);

	/* Modify using pointer */
	*p = 100;

	ft_putnbr(a);
	write(1, "\n", 1);

	ft_putnbr(*p);
	write(1, "\n", 1);

	/* Part 2: string pointer */
	s = "Hello";

	ft_putchar(*s);
	write(1, "\n", 1);

	ft_putchar(*(s + 1));
	write(1, "\n", 1);

	/* Move through the string */
	s = "Hello";
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
	write(1, "\n", 1);

	/* Part 3: function with pointer */
	a = 42;
	ft_change(&a);

	ft_putnbr(a);
	write(1, "\n", 1);

	return (0);
}