#include <iostream>
#include <cmath>
using namespace std;
class CDiem
{
    private:
        float x;
        float y;
    public:
        void Nhap();
        void Xuat();
        float KhoangCach(CDiem);
};

// struct Diem
// {
//     float x;
//     float y;
//     /* data */
// };
// typedef struct Diem DIEM;
// void Nhap(DIEM&);
// void Xuat(DIEM);
// float KhoangCach(DIEM,DIEM);
int main()
{
    // DIEM A,B;
    // Nhap(A);
    // Nhap(B);
    // float kq = KhoangCach(A,B);
    // Xuat(A);
    // Xuat(B);
    // cout<<"\n Ket qua:" << kq;
    CDiem a,b;
    a.Nhap();
    b.Nhap();
    cout<<"\ndiem A:";
    a.Xuat();
    cout<<"\ndiem B:";
    b.Xuat();
    float kq = a.KhoangCach(b);
    cout<<"\nkhoang cach 2 diem:"<<kq;
    return 1;
}
void CDiem::Xuat()
{
    cout<<"\n x ="<<x;
    cout<<"\n y ="<<y;
}
float CDiem::KhoangCach (CDiem P)
{
    return sqrt((x - P.x) * (x - P.x) + (y - P.y) * (y - P.y));
}
void CDiem::Nhap ()
{
    cout<<"\n nhap x:";
    cin>>x;
    cout<<"\n nhap y:";
    cin>>y;
}



