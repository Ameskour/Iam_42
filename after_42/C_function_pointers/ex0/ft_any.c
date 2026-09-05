#include <stdio.h>
int ft_any(char **tab, int(*f)(char*)){
    int i = 0;
    while (tab[i] != NULL) {
        if (f(tab[i])) {
            return 1;
        }
        i++;
    }
    return 0;
}

int	has_a(char *str){
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
    char *tab[] = {"hello", "world", "apple", NULL};
    int result = ft_any(tab, has_a);
    printf("Result: %d\n", result); // Should print 1 since "apple" contains 'a'
    return 0;
}