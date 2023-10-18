#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
    float x,y;
};
typedef struct Diem DIEM;
struct Tamgiac
{
    DIEM a;
    DIEM b;
    DIEM c;
};
typedef struct Tamgiac TAMGIAC;
void nhap(DIEM&);
void xuat(DIEM);
float khoangcach(DIEM, DIEM);
void nhap(TAMGIAC&);
void xuat(TAMGIAC);
float chuvi(TAMGIAC);
float dientich(TAMGIAC);
DIEM trongtam(TAMGIAC);
int main()
{
    TAMGIAC tg;
    nhap(tg);
    xuat(tg);
    float cv = chuvi(tg);
    cout<<"\nchu vi="<<cv;
    float dt = dientich(tg);
    cout<<"\ndien tich="<<dt;
    DIEM g = trongtam(tg);
    cout<<"\ntrong tam:";
    xuat(g);
    return 1;
}
void nhap(DIEM &P)
{
    float temp;
    cout<<"\nnhap x:";
    cin>>temp;
    P.x = temp;
    cout<<"\n nhap y:";
    cin>>temp;
    P.y = temp;
}
void xuat(DIEM P)
{
    cout<<"\n x="<<P.x;
    cout<<"\n y="<<P.y;
}
float khoangcach(DIEM P, DIEM Q)
{
    return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}
void nhap(TAMGIAC &t)
{
    cout<<"\n nhap A:";
    nhap(t.a);
    cout<<"\n nhap B:";
    nhap(t.b);
    cout<<"\n nhap C:";
    nhap(t.c);
}
void xuat(TAMGIAC t)
{
    cout<<"\n A:";
    xuat(t.a);
    cout<<"\n B:";
    xuat(t.b);
    cout<<"\n C:";
    xuat(t.c);
}
float chuvi(TAMGIAC t)
{
    float ab = khoangcach(t.a, t.b);
    float ac = khoangcach(t.a, t.c);
    float bc = khoangcach(t.b, t.c);
    return ab + bc + ac;
}
float dientich(TAMGIAC t)
{
    float ab = khoangcach(t.a, t.b);
    float ac = khoangcach(t.a, t.c);
    float bc = khoangcach(t.b, t.c);
    float p = (ab + bc + ac)/2;
    return sqrt((p*(p - ab) * (p - bc) * (p - ac)));
}
DIEM trongtam(TAMGIAC t)
{
    DIEM temp;
    temp.x = (t.a.x + t.b.x + t.c.x)/3;
    temp.y = (t.a.y + t.b.y + t.c.y)/3;
    return temp;
}


