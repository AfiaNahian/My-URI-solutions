#include <stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
      {
        if((a>b)&&(a>c))
        {
            printf("%d eh o maior\n",a);
        }
        else if((b>a)&&(b>c))
        {
            printf("%d eh o maior\n",b);
        }
        else
        {
            printf("%d eh o maior\n",c);
        }
      }
    return 0;
}
