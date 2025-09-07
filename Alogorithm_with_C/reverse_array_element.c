#include <stdio.h>
int main()
{
    int array[5],i;

    printf("Enter five integer array elements:\n");
    for(i=0;i<5;i++)
        scanf("%d",&array[i]);
    printf("The elements are:\n");
    for(i=0;i<5;i++)    
        printf("%d ",array[i]);
    printf("\nThe reverse of the array elements are:\n");
    for(i=4;i>=0;i--)
        printf("%d ",array[i]);

    return 0;

}