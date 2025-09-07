#include <stdio.h>
void insertion_sort(int array[],int size);
int main()
{
    int array[]={3,2,1,4,6,5,7,8,9};

    int size= sizeof(array)/sizeof(array[0]);

    insertion_sort(array,size);

    

    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }

    
     
    return 0;
}

    
void insertion_sort(int array[],int size)
{
    for(int i=1; i<size;i++)
    {
        int temp = array[i];
        int j = i-1;

        while(j >= 0 && array[j] > temp )
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=temp;

    }
}