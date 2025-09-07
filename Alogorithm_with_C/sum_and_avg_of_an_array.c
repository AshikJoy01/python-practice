#include <stdio.h>
int main()
{
    int input[4], sum=0;

    printf("Enter 4 integer:\n");

    for(int i=0; i<4; i++)
    {
        scanf("%d",&input[i]);
    }

    for(int i=0; i<4; i++)
    {
        sum=sum+input[i];
    }

    printf("The sum of the array is:%d\n",sum);

    printf("The avg value of the array is:%.2f\n",(float)sum/4);


    return 0;

}