#include <stdio.h>
int main()
{
    char a[10];
    int i,n,b,c,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        b=strlen(a);
        if(b==5)
        {
            printf("3\n");
        }
        else if(b==3)
        {
           if((a[0]=='o'&&a[1]=='n')||(a[0]=='o'&&a[2]=='e')||(a[1]=='n'&&a[2]=='e'))
           {
               printf("1\n");
           }
           else if((a[0]=='t'&&a[1]=='w')||(a[0]=='t'&&a[2]=='o')||(a[1]=='w'&&a[2]=='o'))
           {
               printf("2\n");
           }
        }
    }
    return 0;
}
