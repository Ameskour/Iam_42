#include <stdio.h>
#include <unistd.h>

int ft_str_is_alphat(char *str){

    int i ;
    int res ; 

    i = 0 ;
    while(str[i]){
        if(str[i]>='a' && str[i]<='z'){
            return 1 ;
        
        }else{
            return 0 ;

        }
        i++ ;
    }  
}
int main (){
    int res ;
    res = ft_str_is_alphat("AMESKOUR");
    printf("%d ",res);
    return 0 ; 
}