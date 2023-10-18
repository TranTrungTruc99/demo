#include <iostream>
using namespace std;
int main()
{
    int n,s=0,i;
    cout<<"nhap n";
    cin>>n;
    for (i = n; i != 0; i=i/10)
        {
            s=s+i%10;       
        }
    cout<<s;
    /* code */
    return 0;
}
