#include <iostream>
using namespace std;

struct SoPhuc
{
    float thuc, ao;
};
typedef struct SoPhuc SOPHUC;
void nhap(SOPHUC&);
void xuat(SOPHUC);
SOPHUC tong(SOPHUC, SOPHUC);
SOPHUC hieu(SOPHUC, SOPHUC);
SOPHUC tich(SOPHUC, SOPHUC);
int main()
{
    SOPHUC a,b,kq;
    cout<<"nhap a";
    nhap(a);
    cout<<"nhap b";
    nhap(b);
    kq = tong(a,b);
    cout<<"\ntong:";
    xuat(kq);
    kq = hieu(a,b);
    cout<<"\nhieu:";
    xuat(kq);
    kq = tich(a,b);
    cout<<"\ntich:";
    xuat(kq);
    return 1;
}
void nhap(SOPHUC &X)
{
    cout<<"\n nhap thuc:";
    cin>>X.thuc;
    cout<<"\n nhap ao:";
    cin>>X.ao;
}
void xuat(SOPHUC X)
{
    cout<<"thuc:"<<X.thuc;
    cout<<"ao:"<<X.ao;
}
SOPHUC tong(SOPHUC a, SOPHUC b)
{
    SOPHUC temp;
    temp.thuc = a.thuc + b.thuc;
    temp.ao = a.ao + b.ao;
    return temp;
}
SOPHUC hieu(SOPHUC a, SOPHUC b)
{
    SOPHUC temp;
    temp.thuc = a.thuc - b.thuc;
    temp.ao = a.ao - b.ao;
    return temp;
}
SOPHUC tich(SOPHUC a, SOPHUC b)
{
    SOPHUC temp;
    temp.thuc = (a.thuc * b.thuc) - (a.ao * b.ao);
    temp.ao = (a.thuc * b.ao) + (a.ao * b.thuc);
    return temp;
}

