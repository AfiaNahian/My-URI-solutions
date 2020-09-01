#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d",&a)==1)
      {
         b=a/60;
         c=a%60;
         d=b/60;
         e=b%60;
         printf("%d:%d:%d\n",d,e,c);
      }
      return 0;
}
