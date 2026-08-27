#include <unistd.h>


//void	ft_putchar(char c);
void ft_putchar(char c){
    write(1,&c,1);
}


void print(int x, int y , int row , int col ){
            if ((row == 1 && col == 1) || (row==y && col== x)) {
                ft_putchar('A');
            
            }else if ((row ==1  && col ==x ) || (row== y && col== 1)){
                ft_putchar('C');
            }else if (row ==1 || row == y){
                ft_putchar('B');
            }else if (col == 1 || col== x ){
                ft_putchar('B');
            }
            
            else {
                ft_putchar(' ');
            }
}
void rush(int x , int y){ // ( col , row )

    int col ;
    int row ;

    row =1;
    while(row<=y){

        col = 1;
        while (col<=x){
            
            print(x,y,row,col);
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}



int main(void){

    rush(5,3);

    return 0 ;
}