#include <stdio.h>
#include <string.h>
int main()
{
    int a,b,c,i,j,k,l;
    char x[1000],y;
    while(scanf("%d",&a)==1)
    {
       for(i=1;i<=a;i++)
       {
           scanf("%s %d",x,&b);
           l=strlen(x);
           for(j=0;j<l;j++)
           {
               y=x[j]-b;
               if(y<65)
               {
                   y+=26;
               }
              printf("%c",y);
           }
           printf("\n");
       }
    }
    return 0;
}
