#include <unistd.h>

void ft_print_alphaet(void){
    char letter; 
    letter = 'a';
    while(letter<='z'){
        write(1 ,&letter, 1);
        letter ++ ;
    }
}

int main(void){
    ft_print_alphaet();
    return  0; 
}