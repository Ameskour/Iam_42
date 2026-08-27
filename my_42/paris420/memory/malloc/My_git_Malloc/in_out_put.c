#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int *numbers;
    int i;
    int size ;

    printf("How many numbers ; ");
    scanf("%d",&size);
    
    if(size<0){
        return 1 ;
    }

    numbers = malloc(size*sizeof(int));

    if(numbers == NULL){
        return 1 ;
    }
    
    i =0;
    while(i<size){

        printf("enter number :");
        scanf("%d",&numbers[i]);
        i++ ;
    }

    i =0;
     while(i<size){
        printf("%d ",numbers[size-1-i]);
        i++;
     }
    
    free(numbers);
    return (0);
}