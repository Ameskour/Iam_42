#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *numbers;
    int i;
    int size;
    int max;

    printf("How many numbers: ");
    scanf("%d", &size);

    if (size <= 0)
        return (1);

    numbers = malloc(size * sizeof(int));

    if (numbers == NULL)
        return (1);

    i = 0;
    while (i < size)
    {
        printf("Enter number: ");
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("\n---------- normal ----------\n");
    i = 0;
    while (i < size)
    {
        printf("%d ", numbers[i]);
        i++;
    }

    printf("\n---------- reverse ----------\n");
    i = 0;
    while (i < size)
    {
        printf("%d ", numbers[size - 1 - i]);
        i++;
    }

    printf("\n---------- largest ----------\n");
    max = numbers[0];
    i = 1;
    while (i < size)
    {
        if (numbers[i] > max)
            max = numbers[i];
        i++;
    }

    printf("%d", max);

    free(numbers);
    return (0);
}