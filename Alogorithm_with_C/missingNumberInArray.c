#include <stdio.h>

int main()
{
    int a1[]={0,1,3,4,5,6};
    int n = sizeof(a1)/sizeof(a1[0]);

    int sum=0;

    for(int i=0; i<n; i++)
    {
        sum = sum+a1[i];
    }
    int N=n;

    int total = (N*(N+1))/2;

    int miss = total - sum;

    printf("Missing number is:%d",miss);



    return 0;

}