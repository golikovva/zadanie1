#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    scanf("%d",&a);
    i=0;
    b=a;
     for (i=1;i<=n-1;i=i+1)
      {
         scanf("%d",&a);
          if(a>b)
           {
               b=a;
           }
      }
     printf("%d\n",b);
    return 0;
}
