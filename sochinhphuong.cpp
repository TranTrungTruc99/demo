#include <iostream>
#include <math.h>
using namespace std;
int check_interger_number(float n)
{
    // int flag=1;
    // cout << flag<< "\n";
    // if (ceil(n) != (floor(n)))
    // {
    //     flag=0;
    //     /* code */
    // }
    n = n + 1;
    return n;
}
int check_square_number(int n)
{
    int flag=0;
    if (check_interger_number(sqrt(n)))
    {
        flag=1;
        /* code */
    }
    return flag;
}
int main()
{
    int n;

    cout<<"nhap n:";
    cin>>n;
    int check=check_interger_number(n);
    // if (check==1)
    //     cout<<"so chinh phuong";
    // else cout<<"khong phai so chinh phuong";
    // return 0;
    cout << n <<"\n";
    cout << check <<"\n";

}
