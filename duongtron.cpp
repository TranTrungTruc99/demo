#include <iostream>
using namespace std;

struct Diem
{
    float x;
    float y;
};
typedef struct Diem DIEM;
struct Duongtron
{
    float r;
    DIEM tam; 
};
typedef struct Duongtron DUONGTRON;
void nhap(DIEM&);
void xuat(DIEM);
void nhap(DUONGTRON&);
void xuat(DUONGTRON);
float chuvi(DUONGTRON);
float dientich(DUONGTRON);
int main()
{
    DUONGTRON dt;
    nhap(dt);
    xuat(dt);
    float cv = chuvi(dt);
    cout<<"\nchu vi:"<<cv;
    float dtich = dientich(dt);
    cout<<"\ndien tich:"<<dtich;
    return 1;
}
void nhap(DIEM &P)
{
    float temp;
    cout<<"\n nhap x:";
    cin>>temp;
    P.x = temp;
    cout<<"\n nhap y:";
    cin>>temp;
    P.y = temp;
}
void xuat(DIEM P)
{
    cout<<"\n x:"<<P.x;
    cout<<"\n y:"<<P.y;
}
void nhap(DUONGTRON &d)
{
    cout<<"nhap tam:";
    nhap(d.tam);
    cout<<"nhap ban kinh:";
    cin>>d.r;
}
void xuat(DUONGTRON d) 
{
    cout<<"\ntam:";
    xuat(d.tam);
    cout<<"\n ban kinh:"<<d.r;
}
float chuvi(DUONGTRON d)
{
    return 2*3.14*d.r;
}
float dientich(DUONGTRON d)
{
    return 3.14*d.r*d.r;
}