#include <stdio.h>
int main()
{
    int a,b,i,c=0;
    scanf("%d %d",&a,&b);
    {
       c=0;
       while(b<=0)
       {
           scanf("%d",&b);
       }
       for(i=1;i<=b;i++)
       {
           c+=a;
           a++;
       }
       printf("%d\n",c);
    }
    return 0;
}
