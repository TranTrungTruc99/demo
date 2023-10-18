#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float s;
    cout << "nhap n";
    cin >> n;
    s = 1 + (1.0/(1+1));
    for ( i = n; i >= 2; i--)
    {
        s = 1 + 1.0/s;
      
    }
    cout << "tong s: " << s;
    
    return 0;
}
