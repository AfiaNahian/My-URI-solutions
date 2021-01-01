#include <stdio.h>
int main()
{
    float i,j;
    for(i=0;i<=2.1;i=i+0.2)
    {
       for(j=i+1;j<=i+3.1;j++)
       {
           printf("I=%g J=%g\n",i,j);
       }
    }
    return 0;
}
