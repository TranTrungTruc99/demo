#include <iostream>
using namespace std;

struct PhanSo
{
    int ts;
    int ms;
};
typedef struct PhanSo PHANSO;
void nhap(PHANSO &X){
    cout<<"nhap tu so:";
    cin>>X.ts;
    do
    {
        cout<<"nhap mau so:";
        cin>> X.ms;
        if ( X.ms == 0)
        {
            cout<<" nhap lai mau so";
        } 
        /* code */
    } while ( X.ms == 0);   
}
void xuat(PHANSO X){
    cout<<"\n tu:"<<X.ts;
    cout<<"\n mau:"<<X.ms;
}
int xetdau (PHANSO X){
    if (X.ts * X.ms >0)
    {
        return 1;
    }
    if (X.ts * X.ms <0)
    {
        return -1;
    }
    return 0;
}
int main()
{
    PHANSO X;
    nhap(X);
    xuat(X);
    int kq = xetdau(X);
    switch (kq)
    {
    case 1: cout<<"\n phan so duong";break;
    case 0: cout<<"\n phan so bang 0";break;
    case -1: cout<<"\n phan so am";break;
    }
    /* code */
    return 1;
}
