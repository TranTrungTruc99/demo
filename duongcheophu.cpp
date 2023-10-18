#include <iostream>
#include <cmath>
using namespace std;

int main(){
    const int MAX = 3;
    int a[MAX][MAX];
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << "Nhap a[" << i << "][" << j <<"]:";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    int sum = 0;
    for (int i = 0; i < MAX; i++)
    {
        sum += a[i][MAX- 1 - i];
    }
    cout << sum;
}

