#include <iostream>
using namespace std;
int main()
{
    int n, y, nhuan;
    cout<<"nhap thang";
    cin>>n;
    cout<<"nhap nam";
    cin>>y;
    nhuan=y%4;
    switch (n)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:   cout<<"ba muoi mot ngay"; break;
        case 4: case 6: case 9: case 11:   cout<<"ba muoi ngay"; break;
        break;
    
    default: if (nhuan==0)
        {
            cout<<"hai muoi chin ngay";
            
            /* code */
        }
        else if (nhuan !=0)
        {
             cout<<"hai muoi tam ngay";
            /* code */
        }
        break;
    }
    /* code */
    return 0;
}


