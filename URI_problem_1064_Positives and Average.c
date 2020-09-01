#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,m,y,z=0;
    int x=0;
    while(scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f)==6)
    {
      z=0;
      if(a>=0)
      {
        z+=a;
        x++;
      }
      if(b>=0)
      {
        z+=b;
        x++;
      }
      if(c>=0)
      {
        z+=c;
        x++;
      }
      if(d>=0)
      {
        z+=d;
        x++;
      }
      if(e>=0)
      {
        z+=e;
        x++;
      }
      if(f>=0)
      {
        z+=f;
        x++;
      }
      printf("%d valores positivos\n",x);
      y=z/x;
      printf("%.1lf\n",y);
    }
    return 0;
}
