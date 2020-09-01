#include <stdio.h>
int main()
{
   int a,b,c;
   while(scanf("%d %d",&a,&b)==2)
   {
      if(((a%b)==0)||((b%a)==0))
      {
            printf("Sao Multiplos\n");
      }
      else
      {
            printf("Nao sao Multiplos\n");
      }
   }
   return 0;
}
