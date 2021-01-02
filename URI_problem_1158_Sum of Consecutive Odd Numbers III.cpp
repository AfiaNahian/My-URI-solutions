#include <iostream>
using namespace std;
int main()
{
    int a,b,i,n,c,d,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
         cin>>a >>b;
         int c=0;
         if(a%2==1)
         {
            for(j=1;j<=b;j++)
            {
               c+=a;
               a=a+2;
            }
            cout<<c<<"\n";
         }
         else
         {
            a++;
            for(j=1;j<=b;j++)
            {
                c+=a;
                a=a+2;
            }
            cout<<c<<"\n";
         }
    }
    return 0;
}
