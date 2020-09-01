#include <stdio.h>
int main()
{
    int x=0,y=0,z=0,n;
    while(scanf("%d",&n)==1)
    {
        if(n==4)
        {
            break;
        }
        else
        {
            if(n==1)
            x++;
            else if(n==2)
            y++;
            else if(n==3)
            z++;
            else
            continue;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",x,y,z);
    return 0;
}
