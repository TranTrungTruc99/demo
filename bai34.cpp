#include <iostream>
using namespace std;

int main()
{
    int n;
    float s,i;
    cout << "nhap n: ";
    cin >> n;
    s = 0;
    for ( i = 0; i <= n; i++)
    {
        s = s + ((2 * i + 1) / (2 * i + 2));
    }
    cout << "tong: " << s;
    return 0;
}
