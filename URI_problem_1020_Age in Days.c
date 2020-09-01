#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d",&a)==1)
      {
        b=a/365;
        c=(a%365)/30;
        d=(a%365)%30;
        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",b,c,d);
      }
    return 0;
}
