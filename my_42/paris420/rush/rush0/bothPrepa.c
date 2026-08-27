#include <unistd.h>

int main(void){

    int row;
    int col;

    row = 1;
    while (row<=3){
        col=1;
        while(col<=5){
            if (row == 1 && col == 1){
                write(1,"A",1);
            }else if (row == 1 && col == 5){
                write(1,"C",1);
            } else if (row == 3 && col == 1) {
                write(1,"C",1);
            }else if (row == 3 && col == 5){
                write(1,"A",1);

            }else if (row == 1 || row == 3){
                write(1,"B",1);
                
            }else if (col == 1 || col == 5){
                write(1,"B",1);
            }else{
                write(1," ",1);
            }
            
            col++;
        }
        write(1,"\n",1);
        row++;
    }

    return (0);
}
