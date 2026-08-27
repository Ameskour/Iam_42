#include <unistd.h>

/*
** Print one character.
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Print an integer.
*/
void	ft_putnbr(int nb)
{
	/*
	** Handle negative numbers.
	*/
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}

	/*
	** Print the number recursively
	** if it has more than one digit.
	*/
	if (nb >= 10)
		ft_putnbr(nb / 10);

	/*
	** Print the last digit.
	*/
	ft_putchar((nb % 10) + '0');
}

/*
** ft_foreach
**
** Applies f to every element of the array.
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
** Main function for testing.
*/
int	main(void)
{
	int	tab[] = {10, 20, 30, 40, 50};

	/*
	** Send every element of tab
	** to ft_putnbr.
	*/
	ft_foreach(tab, 5, &ft_putnbr);

	return (0);
}