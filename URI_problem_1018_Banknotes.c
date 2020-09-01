#include <stdio.h>
int main()
{
    int a,x,y,z,p,q,m,n;
    while(scanf("%d",&a)==1)
     {
       x=a/100;
       y=(a%100)/50;
       z=((a%100)%50)/20;
       p=(((a%100)%50)%20)/10;
       q=((((a%100)%50)%20)%10)/5;
       m=(((((a%100)%50)%20)%10)%5)/2;
       n=(((((a%100)%50)%20)%10)%5)%2;
       printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",a,x,y,z,p,q,m,n);
     }
    return 0;
}
