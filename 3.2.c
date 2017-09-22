#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,n,i;
    scanf("%d",&n);
    a=1;
    b=1;
     if (n%2==0)
      {
          for(i=1;i<=(n-2)/2;i++)
          {
              b=b+a;
              a=a+b;
          }
      }
      else
      {
          a=2;
          b=1;
          for(i=1;i<=(n-3)/2;i++)
          {
              b=b+a;
              a=a+b;
          }
      }
      printf("%d\n",a);
    return 0;
}
