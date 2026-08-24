#include <stdio.h>

char *ft_strcpy(char *dest , char *src){
    int i;

    i = 0;
    while(src [i]){
        dest[i]=src[i];
        i++ ;
    }
    dest[i]='\0' ; 
    return  dest;
}

int main(void){
    char dest[20]; 
    char *src = "Hello"; 
    char *res ; 
   
    res = ft_strcpy(dest , src);
    printf("%s ", res) ;
    printf("\n");

    return 0 ; 
}