#include <iostream>
using namespace std;

int main()
{
    int n,i;
    float s;
    cout << "nhap n: ";
    cin >> n;
    s = 0;

    for (i = 1; i <= n; i++ )
    {
        s = s + (1.0 / (i * (i + 1))) ;
    }
    cout << "tong: " << s;
}

