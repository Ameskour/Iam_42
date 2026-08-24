#include <stdio.h>

char *ft_strncpy(char *dest , char *src ,unsigned int n ){
    int i;

    i = 0;
    while(i <n && src [i]){
        dest[i]=src[i];
        i++ ;
    }
    while(i<n){
        dest[i]='\0' ;
        i++;
    }
         return  dest;
}

int main(void){
    char dest[20]; 
    char *src = "hi"; 
    char *res ; 
   
    res = ft_strncpy(dest , src , 4);
    printf("%s ", res) ;
    printf("\n") ;

    return 0 ; 
}