#include <unistd.h>
#include <stdio.h>
 
void ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int i;

    i = 0;
    size = size-1;
    while (i < size / 2)
    {
        temp = tab[i
        tab[i] = tab[size- i];
        tab[size- i] = temp;
        i++;
    }
}


int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int i = 0;

    ft_rev_int_tab(arr, size);

    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    return (0);
}
