#include <stdio.h>

int main()
{
    int array[5];

    printf("Enter 5 numbers:\n");

    for(int i=0; i<5; i++)
    {
        scanf("%d", &array[i]);
        
    }

    printf("Your array is:\n");

    for(int i=0; i<5; i++)
    {
        printf("%d ",array[i]);
    }
    
    return 0;
}