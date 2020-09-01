#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,a,b,c;
    char l[1000];
    while(scanf("%d",&a)==1)
    {
        for(i=1;i<=a;i++)
        {
            scanf("%s",l);
            b=strlen(l);
            c=0;
            for(j=0;j<b;j++)
            {
                if(l[j]=='1')
                    c+=2;
                else if(l[j]=='2')
                    c+=5;
                else if(l[j]=='3')
                    c+=5;
                else if(l[j]=='4')
                    c+=4;
                else if(l[j]=='5')
                    c+=5;
                else if(l[j]=='6')
                    c+=6;
                else if(l[j]=='7')
                    c+=3;
                else if(l[j]=='8')
                    c+=7;
                else if(l[j]=='9')
                    c+=6;
                else if(l[j]=='0')
                    c+=6;
                }
            printf("%d leds\n",c);
            }
        }
    return 0;
}
