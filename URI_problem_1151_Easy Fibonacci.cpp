#include <iostream>
using namespace std;
int main()
{
    int i,n;
    int fib[50];
    cin>>n;
    fib[0]=0; fib[1]=1;
    cout<<fib[0]<<" "<<fib[1]<<" ";
    for(i=2;i<n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        if(i==(n-1))
        {
            cout<<fib[i];
        }
        else
        {
            cout<<fib[i]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}
