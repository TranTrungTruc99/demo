#include <iostream>
using namespace std;
int main()
{
    int n,t=1,i,s=0;
    cout<<"nhap n";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        t=t*i;
        s=s+t;
        /* code */
    }
    cout<<s;
    /* code */
    return 0;
}
