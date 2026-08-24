// #include <unistd.h>
// #include <stdio.h>

int ft_strncmp(char *s1 , char *s2, unsigned int n){
    int i;

    i = 0;
    while (i < n && s1[i] && s1[i] == s2[i])
        i++;
    if(i==n)
        return 0; 
    return (s1[i] - s2[i]);
}
// int main(void){
//     int res ; 
//     res = ft_strncmp("heqllo" , "hello",3) ;
//     printf("%d ",res);
//     return 0 ;
// }