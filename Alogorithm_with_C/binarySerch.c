#include <stdio.h>

int main()
{
    int array[]={1,2,3,4,5,6,7,44,55,100};

    int item = 5;

    int left = 0,right = 9,middle;

    while (left<=right)
    {
        middle = (left+right)/2;

        if(array[middle]==item)
        {
            printf("Item found at index %d ",middle);
            return 0;
        }
        else if(array[middle]<item)
        {
            left = middle+1;
        }
        else
        {
            right = middle-1;
        }
    }
    printf("Item not found!");
     
    return 0;
}