#include <iostream>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a >>b;
    if(a>b)
    {
       c=(a-b)+1;
       d=(c*(2*b+c-1))/2;
       cout<<d<<"\n";
    }
    else
    {
        c=(b-a)+1;
        d=(c*(2*a+c-1))/2;
        cout<<d<<"\n";
    }

    return 0;
}
