#include <iostream>
using namespace std;

int main()
{
    int n;
    float s,i;
    cout << "nhap n: ";
    cin >> n;
    s = 0.0;
    for (i = 1.0; i <= n; i++)
    {
        s = s + ( i / (i + 1));
        
    }
    cout << "tong: " << s;
    return 0;
}
