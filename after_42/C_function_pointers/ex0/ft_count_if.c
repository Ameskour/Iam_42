#include <stdio.h>
int ft_count_if(char **tab, int length, int(*f)(char*)){

    int i = 0;
    int count = 1 ; 
    while (tab[i] != NULL) {
        if (f(tab[i])) {
            count++; 
        }
        i++;
    }
    return count;
}

int has_a(char *str){
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == 'a') {
            return 1;
        }
        i++;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    char *tab[] = {"hello", "apple", "world", "banana"};
    int result = ft_count_if(tab, 4, has_a);
    printf("Result: %d\n", result); // Should print 2 since "apple" and "banana" contain 'a'
    return 0;
}
