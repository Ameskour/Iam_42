
#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest , char *src){
    int i ; 
    int j ; 
    
    i = 0 ;
    j = 0 ;
    while(dest[i])
        i++ ;
    while(src[j]){
        dest[i] = src[j] ; 
        i++ ; 
        j++ ;
    }
    dest[i]='\0';
    return dest ;
}

int main(void){
    char dest[20] = "Hi" ;// String literals like "Hi" should not be modified. Your ft_strcat() tries to modify dest:
    char *src = "hello" ;
    char *res;

    res = ft_strcat(dest ,src);
    printf("%s ", res); 

    return 0 ;
}