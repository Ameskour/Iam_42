#include <unistd.h>
void ft_putchar(char c);

void rush(int x, int y){ //(colunm , row  ) (5,3)

    int row, col;
    
   
    row=1;

    while(ligne<=y){
        col =1;
        while(col<=x){
          
            //condition
            if(ligne==1 && col == 1){
                ft_putchar('A');
            
            } 
            else{
                ft_putchar('X');
            }else if (row ==y&& col == x)

            col ++;
        }
        ft_putchar('\n');
        ligne++;
        
    }
 

    
}