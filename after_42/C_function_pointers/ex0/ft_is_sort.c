#include <stdio.h>
int ft_is_sort(int *tab, int length, int(*f)(int, int)){

    int i = 0;
    int ascending = 1; // Assume the array is sorted in ascending order
    int descending = 1; // Assume the array is sorted in descending order

    while (i < length - 1) {
        if (f(tab[i], tab[i + 1]) > 0) {
            ascending = 0; // Not sorted in ascending order
        }
        if (f(tab[i], tab[i + 1]) < 0) {
            descending = 0; // Not sorted in descending order
        }
        i++;
    }

    return ascending || descending; // Return 1 if sorted, otherwise return 0
}

int	compare(int a, int b)
{
	return (a - b);
}

int main(int argc, char const *argv[])
{
    int tab[] = {1, 2, 3, 4};
    int length = sizeof(tab) / sizeof(tab[0]);
    int result = ft_is_sort(tab, length, compare);
    printf("Result: %d\n", result); // Should print 1 since the array is sorted in ascending order
    return 0;
}