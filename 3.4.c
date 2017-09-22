#include <stdio.h>
#include <stdlib.h>
int f(int i,int b)
{
    if(i==b || i==0)
    {
        return 1;
    }
    else
    {
        return f(i,b-1)+f(i-1,b-1);
    }
}

int main()
{
    int a,b,i;
    scanf("%d",&b);
    for(i=0;i<=b;i++)
    {
        printf("%d ",f(i,b));
    }

    return 0;
}
