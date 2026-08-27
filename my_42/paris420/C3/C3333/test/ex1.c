#include <unistd.h>

void ex_1(void){
    
    char letter='a';
    
    while (letter <='z')
    {
        write(1,&letter,1);
        letter++;
    }
}

int main(void){
    ex_1();
    return (0);
}
