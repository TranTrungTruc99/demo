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
        int SoSanh(CPhanSo);
};
int main()
{
    CPhanSo a, b;
    cout<<"nhap phan so 1:\n";
    a.Nhap();
    cout<<"nhap phan so 2:\n";
    b.Nhap();
    int kq = a.SoSanh(b);
    cout<<"Phan so lon nhat:\n";
    if ( kq >=0 )
        a.Xuat();
    else 
        b.Xuat();
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
    cout<<"tu:"<<tu;
    cout<<"\n mau:"<<mau;
}
int CPhanSo::SoSanh(CPhanSo x)
{
    float a = (float)tu/mau;
    float b = (float)x.tu/x.mau;
    if ( a>b )
        return 1;
    else
        return -1;
}