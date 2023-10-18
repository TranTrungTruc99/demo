#include <iostream>
using namespace std;
int main()
{
    int n,s=0,ss,i;
    cout<<"nhap n";
    cin>>n;
    s=0;
    for ( i = n; i >0 ; i=i/10)
    {
        s=s*10+i%10;
        /* code */
    }
    if (s==n)
    {
        cout<<"doi xung";
    }
    else
    {
        cout<<"ko doi xung";
    }
    return 0;
}