#include <stdio.h>

void sort(int array[],int size)
{
    for(int i=0; i<size-1; i++)
    {
        for(int j=0; j<size-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp = array[j];
                array[j] =array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int removeDuplication(int array[],int size)
{
    if(size==0 || size==1)
    return size;

    int j=0;

    for(int i=0; i<size-1; i++)
    {
        if(array[i] != array[i+1])
        {
            array[j++]=array[i];
        }
    }
    array[j++] = array[size-1];

    return j;
}

void printArray(int array[],int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
}

int main()
{
    int array[]={4,3,4,5,4,3,2,6,7,8,7};

    int size = sizeof(array)/sizeof(array[0]);

    printf("\nOriginal Array:\n");
    printArray(array,size);

    sort(array,size);

    printf("\nSorted array:\n");
    printArray(array,size);

    size = removeDuplication(array,size);

    printf("\nRemoved duplication form sorted array:\n");
    printArray(array,size);


    return 0;
}