#include <unistd.h>
void	ft_apply(int *tab, int length, int (*condition)(int), void (*action)(int)){
    int i = 0;
    while (i < length) {
        if (condition(tab[i])) {
            action(tab[i]);
        }
        i++;
    }
}

int is_even(int n) {
    return n % 2 == 0;
}

void ft_putnbr(int n) {
    char c;
    if (n >= 10)
        ft_putnbr(n / 10);
    c = n % 10 + '0';
    write(1, &c, 1);
}

int main(void) {
    int tab[6] = {1, 2, 3, 4, 5, 6};

    ft_apply(tab, 6, &is_even, &ft_putnbr);
    write(1, "\n", 1);
    return (0);
}
