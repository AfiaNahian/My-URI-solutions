#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,a,b,c,d;
    char x[1005],y[1005];
    scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            scanf("%s %s",&x,&y);
            b=strlen(x);
            c=strlen(y);
            d=0;
            for(j=c,k=b;k>=0;j--,k--)
               {
                   if(x[k]==y[j])
                   {
                       d++;
                   }
                   else
                   {
                       break;
                   }
               }
            if(d==c+1)
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
        }
    return 0;
}
