#include <unistd.h>

void ft_putchar(char c){
    write(1,&c, 1);
}

void ft_putnbr(int nbr){
    if(nbr>=10)
        ft_putnbr(nbr/10);
    ft_putchar((nbr%10)+'0');
}

void ft_putstr(char str[]){
    int i =0 ;
    while(str[i]!=0){
        ft_putchar(str[i]);
        i++;
    }

}
int main (void){
    char c[]="Hello";

    ft_putstr(c);
    ft_putchar('\n');
    
    ft_putstr("Hello world");
    ft_putchar('\n');
    // ft_putchar(c);
    // ft_putchar('\n');
    return 0 ;
}