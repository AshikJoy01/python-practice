#include <stdio.h>

int max(int array[],int length);

int main()
{

    int a[5];

    printf("Enter five integers which you want to know the maximum number:\n");

    for(int i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }

    int X=max(a,5);

    printf("Max value of the array is:%d",X);




    return 0;


}
int max(int array[],int length)
{
    int X=array[0];
    for(int i=0; i<length; i++)
    {
        if(array[i]>X)
        {
            X=array[i];
        }
        
    }
    return X;
}