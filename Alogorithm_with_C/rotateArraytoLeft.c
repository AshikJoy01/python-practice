#include <stdio.h>

void rotate_left_once(int array[],int size);
void rotate_left(int array[],int size,int n);


int main()
{
    int a1[]={1,2,3,4,5};

    int size = sizeof(a1)/sizeof(a1[0]);

    for(int i=0 ; i<size ; i++)
    {
        printf("%d ",a1[i]);
    }
    printf("\n");

    /*
    rotate_left_once(a1,size);

    for(int i=0; i<size ; i++)
    {
        printf("%d ",a1[i]);
    }

    printf("\n");
    */

    rotate_left(a1, size, 2);
    for(int i=0; i<size ; i++)
    {
        printf("%d ",a1[i]);
    }

    return 0;

}
void rotate_left(int array[],int size,int n)
{
    for (int i=0; i<n; i++)
    {
        rotate_left_once(array,size);
    }
}




void rotate_left_once(int array[],int size)
{
    int temp = array[0];
    for(int i=0; i<size-1; i++)
    {
        array[i]=array[i+1];
    }
    array[size-1] = temp;

}


