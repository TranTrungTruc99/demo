#include <iostream>
#include <cmath>
using namespace std;
class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
        void Nhap();
        void Xuat();
        void RutGon();
};
int main()
{
    CPhanSo ps;
    ps.Nhap();
    cout<<"phan so ban dau:";
    ps.Xuat();
    ps.RutGon();
    ps.Xuat();
    return 1;
}
void CPhanSo::Nhap()
{
    cout<<"nhap tu:";
    cin>>tu;
    cout<<"nhap mau:";
    cin>>mau;
}
void CPhanSo::Xuat()
{
    cout<<"\n Tu:"<<tu;
    cout<<"\n Mau:"<<mau;
}
void CPhanSo::RutGon()
{
   int a = abs(tu);
   int b = abs(mau);
    while (a*b !=0)
    {
        if (a>b) 
            a = a - b;
        else 
            b = b - a;
    }
    tu = tu/(a+b);
    mau = mau/(a+b);
}