#include <stdio.h>

int main()
{
    int a[]={1,4,3,5,2,3,4,5};

    int size= sizeof(a)/sizeof(a[0]);

    int pos=-1, v;

    printf("Enter the number you want to serch:\n");
    scanf("%d",&v);

    for(int i=0; i<size; i++)
    {
        if(v==a[i])
        {
            pos= i+1;
            break;
        }
    }

    if(pos == -1)
    {
        printf("Number not found!");
    }
    else
    {
        printf("The number %d is in %d position.", v,pos);
    }
 
    return 0;

}
