//void	ft_putchar(char c);
#include <unistd.h>

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
                write(1,"A",1);
                
            }else if (row == 1 && col == x){     //row == 1 && col == 5
                write(1,"C",1);
            } else if (row == y && col == 1) {   // row == 3 && col == 1
                write(1,"C",1);
            }else if (row == y && col == x){     // row == 3 && col == 5 
                write(1,"A",1);
                
            }else if (row == 1 || row == y){     //(row == 1 || row == 3) 
                write(1,"B",1);

            }else if (col == 1 || col == x){      //(col == 1 || col == 5)
                write(1,"B",1);  

            }else{
                write(1," ",1);
            }
            col++;
        }
        write(1,"\n",1);
		row++;
	}
}

int main(void){
    rush(5,10);
    return(0);
}