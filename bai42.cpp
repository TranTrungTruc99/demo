#include <iostream>
using namespace std;

int main()
{
    int n,i,s,x;
    cout << "nhap n: ";
    cin >> n;
    s = 0;
    for ( i = 1; i < n / 2; i++)
    {
        if ((s + i) < n)
        {
            s = s + i;
        }        
        else
        {
            break;
        }
        
        
    }
     x = i - 1;
    cout << "xuat k:" << x ;
    return 0;
}
