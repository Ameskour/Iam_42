#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr){
	if(nbr>=10){
		ft_putnbr(nbr/10);
	}
	ft_putchar((nbr%10)+'0');
	
}


void	ft_print_comb2(void)
{
	int	a;
	int	b;


	a = 0;
	while (a <= 99)
	{
		
			ft_putchar((a/10) + '0');
			ft_putchar((a%10)+'0');


			if ( a!=99)
			{
				write(1, ", ", 2);
			}

a++;
		}
		
	}


int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}

//00, 01, 02, 03, 04, 05, 06, 07, 08, 09, 10, 11, ... 98, 99