#include <iostream>
#include <cmath>
using namespace std;
class CDKhongGian
{
    private:
        int x;
        int y;
        int z;
    public:
        void Nhap();
        void Xuat();
        float KhoangCach(CDKhongGian);
};
int main()
{
    CDKhongGian a,b;
    cout<<"nhap diem thu 1:\n";
    a.Nhap();
    cout<<"nhap diem thu 2:\n";
    b.Nhap();
    float kq = b.KhoangCach(a);
    a.Xuat();
    b.Xuat();
    cout<<"\nkhoang cach 2 diem:"<<kq;
    return 1;
}
void CDKhongGian::Nhap()
{
    cout<<"\nnhap x:";
    cin>>x;
    cout<<"\nnhap y:";
    cin>>y;
    cout<<"\nnhap z:";
    cin>>z;
}
void CDKhongGian::Xuat()
{
    cout<<"\nx:"<<x;
    cout<<"\ny:"<<y;
    cout<<"\nz:"<<z;
}
float CDKhongGian::KhoangCach(CDKhongGian P)
{
    return sqrt((x - P.x) * (x - P.x) +
                (y - P.y) * (y - P.y) +
                (z - P.z) * (z - P.z));
}

