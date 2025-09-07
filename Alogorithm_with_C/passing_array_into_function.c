#include <stdio.h>

void dis(int N[])
{
    for(int i=0; i<3; i++)
    {
        printf("%d ",N[i]);
    }
}

int main()
{
    int num[]={3, 9, 7};
    dis(num);

    return 0;
}