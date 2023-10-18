#include <iostream>
using namespace std;
int main()
{
    int x,n,i,t=1,s=0;
    cout<<"nhap n";
    cin>>n;
    cout<<"nhap x";
    cin>>x;
    for (i = 1; i <=n; i++)
    {
        t=t*x;
        s=s+t;
        /* code */
    }
    cout.width(10);
    cout<<s;
    /* code */
    return 0;
}
