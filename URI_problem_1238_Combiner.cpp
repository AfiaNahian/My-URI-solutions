#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100],b[100];
    int i,x,y,n,p,q,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a >>b;
        x=strlen(a);
        y=strlen(b);
        p=0;q=0;
        for(j=0;j<x+y;j++)
        {
            if(a[j]=='\0')
            {
                p=1;
            }
            if(b[j]=='\0')
            {
                q=1;
            }
            if(p==1 && q==1)
            {
                break;
            }
            if(p==0)
            {
                cout<<a[j];
            }
            if(q==0)
            {
                cout<<b[j];
            }
        }
        cout<<"\n";
    }
    return 0;
}
