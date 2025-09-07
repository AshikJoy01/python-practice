#include <stdio.h>

void rotate_right_once(int array[],int size);
void rotate_right(int array[],int size,int n);


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
    rotate_right_once(a1,size);

    for(int i=0; i<size ; i++)
    {
        printf("%d ",a1[i]);
    }

    printf("\n");
    */

    rotate_right(a1, size, 2);
    for(int i=0; i<size ; i++)
    {
        printf("%d ",a1[i]);
    }

    return 0;

}
void rotate_right(int array[],int size,int n)
{
    for (int i=0; i<n; i++)
    {
        rotate_right_once(array,size);
    }
}




void rotate_right_once(int array[],int size)
{
    int temp = array[size-1];
    for(int i=size-1; i>0; i--)
    {
        array[i]=array[i-1];
    }
    array[0] = temp;
    

}


