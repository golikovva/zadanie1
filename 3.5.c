#include <stdio.h>
#include <stdlib.h>


int main()
{
    int a,b,i,n;
    scanf("%d",&n);
    a=2;
    if(n==1)
    {
        printf("neprost\n");
        return 0;
    }
    while (a<n && n%a!=0)
    {
        a=a++;
    }
    if (a==n)
    {
        printf("prost\n");
    }
    else
    {
        printf("neprost\n");
    }
    return 0;
}
