#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
        if(tab[i] % 2 == 0) // Check if the number is even
        {
            f(tab[i]);
        }
		i++;
	}
}


void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	
	if(n%2==0){
		c = n % 10 + '0';	
		write(1, &c, 1);
	}
	
}

int	main(void)
{
	int	tab[6] = {1, 2, 3, 4, 5, 6};

	ft_foreach(tab, 6, &ft_putnbr);
	write(1, "\n", 1);
	return (0);
}