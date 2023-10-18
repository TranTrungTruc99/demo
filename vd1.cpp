#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
int main()
{

    int n = 4;
    char str[n];
    char c;
    printf("nhap chuoi ky tu: ");
    cin.getline(str, n);
    //    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
        /* code */
    }
    _getch();
}
