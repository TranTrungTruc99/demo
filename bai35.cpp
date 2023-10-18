#include <iostream>
using namespace std;

int main()
{
    int n,i,s;
    cout << "nhap n: ";
    cin >> n;
    s = 1;
    for (i = 1; i <= n; i++)
    {
        s = s * i;
        /* code */
    }
    cout << "tich: " << s;
    return 0;
}
