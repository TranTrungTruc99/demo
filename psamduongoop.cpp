#include <iostream>
using namespace std;
class CPhanSo
{
    private:
        int tu;
        int mau;
    public:
        void Nhap();
        void Xuat();
        int SoSanh();
};
int main()
{
    CPhanSo ps;
    ps.Nhap();
    cout<<"phan so vua nhap";
    ps.Xuat();
    int kq = ps.SoSanh();
    switch (kq)
    {
    case -1:
        cout<<"\n   phan so am";
        break;
    case 0:
        cout<<"\nphan so bang khong";
        break;
    case 1:
        cout<<"\nphan so duong";
        break;
    }
    return 1;
}
void CPhanSo::Nhap()
{
    cout<<"nhap tu:";
    cin>>tu;
    do
    {
    cout<<"nhap mau:";
    cin>>mau;
    if (mau == 0)
        cout<<"\nnhap lai mau";
    } while (mau == 0); 
}
void CPhanSo::Xuat()
{
    cout<<"\nTu:"<<tu;
    cout<<"\nMau:"<<mau;
}
int CPhanSo::SoSanh()
{
    int temp = tu * mau;
    if (temp < 0)
        return -1;
    if (temp = 0)
        return 0;
    return 1;
}