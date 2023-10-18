#include <iostream>
using namespace std;

int main()
{   
    int n,i,s;
    cout<<"nhap n";
    cin>>n;
    s=0;
    for (i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            s=s+i;
            /* code */
        }
    }
    cout<<s;
    /* code */
    return 0;
}
