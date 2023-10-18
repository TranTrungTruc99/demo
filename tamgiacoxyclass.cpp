#include <iostream>
#include <cmath>
using namespace std;
class CDiem
{
    private:
        float x;
        float y;
    public:
        void nhap();
        void xuat();
        float khoangcach(CDiem);
        float getx();
        float gety();
        void setx(float x);
        void sety(float y);
};
class CTamGiac
{
    private:
        CDiem a;
        CDiem b;
        CDiem c;
    public:
        void NhapTG();
        void XuatTG();
        float ChuVi();
        float DienTich();
        CDiem TrongTam();
};
int main()
{
    CTamGiac tg;
    tg.NhapTG();
    tg.XuatTG();
    float cv = tg.ChuVi();
    cout<<"\nchu vi:"<<cv;
    float dt = tg.DienTich();
    cout<<"\ndien tich:"<<dt;
    CDiem t;
    t = tg.TrongTam();
    cout<<"\n trong tam:";
    t.xuat();
}
float CDiem::getx()
{
    return x;
}
float CDiem::gety()
{
    return y;
}
void CDiem::setx(float x)
{
    this->x = x; 
}
void CDiem::sety(float y)
{
    this->y = y; 
}
void CDiem::nhap()
{
    cout<<"\nnhap x:";
    cin>>x;
    cout<<"\nnhap y:";
    cin>>y;
}
void CDiem::xuat()
{
    cout<<"\nx:"<<x;
    cout<<"\ny:"<<y;
}
float CDiem::khoangcach(CDiem P)
{
    return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}
void CTamGiac::NhapTG()
{
    cout<<"\nnhap tam giac";
    cout<<"\nnhap A:";
    a.nhap();
    cout<<"\nnhap B:";
    b.nhap();
    cout<<"\nnhap C:";
    c.nhap();
}
void CTamGiac::XuatTG()
{
    cout<<"\nTam giac vua nhap:";
    cout<<"\nA:";
    a.xuat();
    cout<<"\nB:";
    b.xuat();
    cout<<"\nC:";
    c.xuat();
}
float CTamGiac::ChuVi()
{
    float ab = a.khoangcach(b);
    float bc = b.khoangcach(c);
    float ca = c.khoangcach(a);
    return ab + bc + ca;
}
float CTamGiac::DienTich()
{
    float ab = a.khoangcach(b);
    float bc = b.khoangcach(c);
    float ca = c.khoangcach(a);
    float p = (ab + bc + ca)/2;
    return sqrt((p*(p - ab) * (p - bc) * (p - ca)));
}
CDiem CTamGiac::TrongTam()
{
    CDiem temp;
    temp.setx((a.getx()+ b.getx() + c.getx())/3);
    temp.sety((a.gety()+ b.gety() + c.gety())/3);
    return temp;
}