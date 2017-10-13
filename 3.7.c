#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, x = 0;
    scanf("%d", &n);
    int a[n];
    scanf("%d", &m);
    for (i = 1; i <= n; i++)
    {
        a[i] = 1;
    }
    for(j = 1; j <= n-3; j++)
    {
        for(i = x; i <= x+m-1; i++)
        {
            if (a[i%n] == 0)
            {
                i = i++;
                x = x+1;
            }
            if (i == x+m-1)
            {
                a[i%n] = 0;
            }
        }
        x = x+m;

    }
    for (j = 1; j <= 3; j++)
    {
        for (i = x; i <= x+m-1; i++)
        {
            if (a[i%n] == 0)
            {
                x = x+1;
                i = i++;
            }
            if(i == x+m-1)
            {
                a[i%n] = 0;
                printf("%d ", i % n+1);
            }
        }
        x = x+m;
    }
    return 0;
}
