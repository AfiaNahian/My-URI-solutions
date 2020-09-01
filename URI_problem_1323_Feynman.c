#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d",&a)==1)
    {
       if(a==0)
       {
           break;
       }
       else
       {
           b=(a*(a+1)*((2*a)+1))/6;
       }
       printf("%d\n",b);
    }
    return 0;
}
