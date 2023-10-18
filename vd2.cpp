#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

int main()
{

    int n, s;
    cout << "nhap n: ";
    cin >> n;
    s = 1;
    while (n/10 > 0)
    {

        {
            s = s + 1;
            n = n / 10;
        }
    }
    cout << "so chu so" << s;
    _getch();
}
