#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
    if (nb>=10){
        ft_putnbr(nb/10);
    }
    ft_putchar(nb%10+'0');
}

int	ft_iterative_factorial(int nb)
{
    int result=1;
    int i = 1;
    if (nb<0)
        return 0;
    
    while(i<=nb){
        result=result*i;
        i++;
    }
    return result;
}

int	main(void)
{
	ft_putnbr(ft_iterative_factorial(5));
	ft_putchar('\n');

	ft_putnbr(ft_iterative_factorial(0));
	ft_putchar('\n');

	ft_putnbr(ft_iterative_factorial(-3));
	ft_putchar('\n');

	return (0);
}