#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float x,s;
    cout << "nhap x: ";
    cin >> x;
    cout << "nhap n: ";
    cin >> n;
    s = 1;
    for ( i = 1; i <= n; i++)
    {
        s = s * x;
        /* code */
    }
    cout << "ket qua: " << s;
    
    return 0;
}
