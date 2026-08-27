#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
    int i ;
    char *hex ;
    
    i = 0 ;
    hex = "0123456789abcdef"; 

    while(str[i]!='\0'){
        if((unsigned char)str[i]<32 || (unsigned char)str[i] >126) {
            write(1 ,"\\",1);
            write(1,&hex[(unsigned char)str[i]/16],1);
            write(1 ,&hex[(unsigned char)str[i] % 16], 1) ; 
        }
        else {
            write(1,&str[i],1);
        }
        i++ ;
    }
}

    int	main(void)
{
	ft_putstr_non_printable("Hello\nHow are you ?");
	ft_putstr_non_printable("\n");
	ft_putstr_non_printable("Hello\tWorld");
	ft_putstr_non_printable("42 Paris");
	return (0);
}

