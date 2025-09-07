#include <stdio.h>
void update(int array[],int size,int oldValue,int newValue);
int main()
{
    int array[]={1,2,3,4,5,6,7,44,55,100};

    int size= sizeof(array)/sizeof(array[0]);

    update(array,size,44,33);

    for(int i=0; i<size; i++)
    {
        printf("%d ",array[i]);
    }
  
    return 0;
}
void update(int array[],int size,int oldValue,int newValue)
{
    for(int i=0; i<size; i++)
    {
        if(array[i] == oldValue)
        {
            array[i]=newValue;
            break;
        }
    }
}