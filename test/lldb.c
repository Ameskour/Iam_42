#include <stdio.h>

int main(void)
{
    int i;
    int result;

    i = 0;
    result = 0;

    while (i < 5)
    {
        result = result + i;
        i++;
    }

    printf("result = %d\n", result);
    return (0);
}