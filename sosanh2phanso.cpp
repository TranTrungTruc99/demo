#include <iostream>
using namespace std;

struct PhanSo
{
    int ts, ms;
};
typedef struct PhanSo PHANSO;
void nhap(PHANSO&);
void xuat(PHANSO);
int sosanh(PHANSO, PHANSO);
int main()
{
    PHANSO a,b;
    nhap(a);
    nhap(b);
    int kq = sosanh(a, b);
    switch ( kq )
    {
        case 1:
            {
                cout<<" phan so lon nhat la:";
                xuat(a);
                break;
            }
        case -1:
            {
                cout<<" phan so lon nhat la:";
                xuat(b);
                break;
            }
        case 0:
            {
                cout<<" a bang b ";
                break;
            }
    }
    return 0;
}
void nhap(PHANSO &X)
{
    cout<<"nhap tu:";
    cin>> X.ts;
    do
    {
        cout<<"nhap mau:";
        cin>>X.ms;
    } while ( X.ms < 1 );
}
void xuat(PHANSO X)
{
    cout<<"\n Tu:"<<X.ts;
    cout<<"\n Mau:"<<X.ms;
}
int sosanh(PHANSO X, PHANSO Y)
{
    int ss;
    X.ts = X.ts * Y.ms;
    Y.ts = Y.ts * X.ms;
    if (X.ts > Y.ts)
        {
            return 1;
        }
    if ( X.ts < Y.ts )
        {
            return -1;
        }
    return 0;
}
