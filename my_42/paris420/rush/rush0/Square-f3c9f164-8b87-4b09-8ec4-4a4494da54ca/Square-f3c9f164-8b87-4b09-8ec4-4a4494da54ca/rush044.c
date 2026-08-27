#include "ft_putchar.c"

void	rush(int x, int y) // rush(5,3)
{
	int	row; //x
	int	col;//y

	row=1;
	while (row <= y) // Y=5 
	{
        col=1;
		while(col<=x){ //x = 3 
            if (row == 1 && col == 1){
                ft_putchar('A');
                
            }else if (row == 1 && col == x){     //row == 1 && col == 5
                ft_putchar('C');
            } else if (row == y && col == 1) {   // row == 3 && col == 1
                ft_putchar('C');
            }else if (row == y && col == x){     // row == 3 && col == 5 
                ft_putchar('A');
                
            }else if (row == 1 || row == y){     //(row == 1 || row == 3) 
                ft_putchar('B');

            }else if (col == 1 || col == x){      //(col == 1 || col == 5)
                ft_putchar('B'); 

            }else
		    ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
		row++;
	}
}

int main(void)
{
    rush(5,10);
    return(0);
}
