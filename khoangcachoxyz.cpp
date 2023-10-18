#include <iostream>
#include <cmath>
using namespace std;
struct diemkg
{
    float x;
    float y;
    float z;
};
typedef struct diemkg DIEMKG;
void Nhap(DIEMKG&);
void Xuat(DIEMKG);
float Khoangcach(DIEMKG, DIEMKG);
int main()
{
    DIEMKG A, B;
    Nhap(A);
    Nhap(B);
    float kq = Khoangcach(A, B);
    Xuat(A);
    Xuat(B);
    cout<<"\n ket qua:"<<kq;
    /* code */
    return 0;
}
void Nhap(DIEMKG &Q){
    cout<<" nhap x:";
    cin>>Q.x;
    cout<<" nhap y:";
    cin>>Q.y;
    cout<<" nhap z:";
    cin>>Q.z;
}
void Xuat(DIEMKG Q)
{
    cout<<"\n x ="<<Q.x;
    cout<<"\n y ="<<Q.y;
    cout<<"\n z ="<<Q.z;
}
float Khoangcach( DIEMKG Q, DIEMKG P)
{
    return sqrt((Q.x - P.x) * (Q.x - P.x))
               +(Q.y - P.y) * (Q.y - P.y)
               +(Q.z - P.z) * (Q.z - P.y);
}


