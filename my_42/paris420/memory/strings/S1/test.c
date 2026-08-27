
char *ft_strcapitalize(char *str){
    int i ; 
    int nw ; 

    nw = 1 ;
    i = 0 ;
    while(str[i]){
        if((str[i]>='a' && str[i]<='z')
            ||(str[i]>='A' && str[i]<='Z')
            ||(str[i]>='0' && str[i]<='9') )
        {
            if(nw && str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32;
            else if (!nw && str[i]>='A' && str[i]<='Z')
                str[i]=str[i]+32;
            nw=0;
        }else{
            nw = 1 ;
        }
        i++;
    }
    return str;
}

#include<stdio.h>
int main (void){
    char *res ;
    char str[] = "hello, how are you doing? 42words forty-two; fifty+and+one" ; 
    res = ft_strcapitalize(str);
    printf("%s :",res);
    return 0 ;
}