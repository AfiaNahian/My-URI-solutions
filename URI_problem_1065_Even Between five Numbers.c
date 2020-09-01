#include <stdio.h>
int main()
{
    int a,b,c,d,e,x=0,y,z;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)==5)
    {
      if(a%2==0)
      {
        x++;
      }
      if(b%2==0)
      {
        x++;
      }
      if(c%2==0)
      {
        x++;
      }
      if(d%2==0)
      {
        x++;
      }
      if(e%2==0)
      {
        x++;
      }
      printf("%d valores pares\n",x);
    }
    return 0;
}
