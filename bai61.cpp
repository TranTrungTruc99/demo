#include <iostream>
using namespace std;
int main()
{
    int n,s=0,dv,i;
    cout<<"nhap n";
    cin>>n;
    for (i = n; i != 0; i=i/10)
    {
        dv=i%10;
        if (dv%2 != 0)
        {
            s++;
            /* code */
        }  
        /* code */
    }
    cout<<s;
    /* code */
    return 0;
}
