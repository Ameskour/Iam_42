#include "ft_putchar.c"

void	rush(int x, int y) // rush(5,3)
{	
	int	row; //x
	int	col;//y
	row=1;
	while (row <= y) // Y=5 
	{
        col=1;
		while(col<=x)
		{	
			//if ((row == 1 && col == x || row == y && col == 1))
                        //	ft_putchar('C');
			if ((row == 1 && col == 1) || (row == y && col == x))
				ft_putchar('A'); 
			else if ((row == y && col == 1|| row == 1 && col == x))
		    		ft_putchar('C'); 
			else if ((row == 1 || row == y) || (col == 1 || col == x))
                		ft_putchar('B');
            		else
		    		ft_putchar(' ');
            		col++;
		}
        	ft_putchar('\n');
		row++;
	}
}
int	main(void)
{
	rush(5, 8);
	return (0);
}
