#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *numbers;
    int i;
    int size ;

    printf("give me numbers: ");
    scanf("%d",&size);

    if (size<=0){
        printf("please enter only postive number\n");
        return 1 ;
     
    }
    numbers = malloc(size * sizeof(int));

   
    if (numbers == NULL)
    {
        return (1);
    }

    i = 0;
    while(i<size){
        numbers[i]=i+1;
        printf("%d ", numbers[i]);
        i++;
    }

    
     
    
    free(numbers);
    return (0);
}