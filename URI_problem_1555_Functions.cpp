#include <iostream>
using namespace std;
int main()
{
    int n,x,y,i;
    long int p,q,r;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x >>y;
        p=(3*x)*(3*x)+y*y;// (3x)² + y²
        q=2*(x*x)+(5*y)*(5*y);//  2(x²) + (5y)²
        r=-100*x+(y*y*y);//  -100x + y³
        if((p>q) && (p>r))
        {
            cout<<"Rafael ganhou\n";
        }
        else if((q>p) && (q>r))
        {
            cout<<"Beto ganhou\n";
        }
        else if((r>p) && (r>q))
        {
            cout<<"Carlos ganhou\n";
        }
    }
    return 0;
}
