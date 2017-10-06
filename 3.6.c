#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a1,b1,a2,b2,a3,b3,i;
    int l[3];
    float s;
    scanf("%d %d %d %d %d %d", &a1,&b1,&a2,&b2,&a3,&b3);
    l[1]=(a1-a2)*(a3-a2)+(b3-b2)*(b1-b2);
    l[2]=(a1-a3)*(a2-a3)+(b1-b3)*(b2-b3);
    l[3]=(a3-a1)*(a3-a1)+(b3-b1)*(b2-b1);


        if(l[1]==0)
        {
            s= pow((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2),0.5)*pow((a3-a2)*(a3-a2)+(b3-b2)*(b3-b2),0.5);
            printf("%f",s);
        }

        if(l[2]==0)
        {
            s= pow((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3),0.5)*pow((a2-a3)*(a2-a3)+(b2-b3)*(b2-b3),0.5);
            printf("%f",s);
        }
        if(l[3]==0)
        {
            s= pow((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1),0.5)*pow((a3-a1)*(a3-a1)+(b3-b1)*(b3-b1),0.5);
            printf("%f",s);
        }

    return 0;
}
