#include <iostream>
using namespace std;

struct PhanSo
{
    int ts;
    int ms;
    /* data */
};
typedef struct PhanSo PHANSO;
void Nhap(PHANSO&);
void Xuat(PHANSO);
float tong(PHANSO,PHANSO);
float hieu(PHANSO,PHANSO);
float tich(PHANSO,PHANSO);
void Xuat(PHANSO X){
    cout<<"\n tu="<<X.ts;
    cout<<"\n mau="<<X.ms;
}
float tong(PHANSO X1, PHANSO X2){
    int tu, mau;
    tu = (X1.ts * X2.ms) + (X2.ts * X1.ms);
    mau = X1.ms * X2.ms;
    return (float) tu/mau;
}
float hieu(PHANSO X1, PHANSO X2){
    int tu, mau;
    tu = (X1.ts * X2.ms) - (X2.ts * X1.ms);
    mau = X1.ms * X2.ms; 
    return (float) tu/mau;
}
float tich(PHANSO X1, PHANSO X2){
    int tu, mau;
    tu = X1.ts * X2.ts;
    mau = X1.ms * X2.ms;
    return (float) tu/mau;
}
void Nhap(PHANSO &X){
    cout<<"nhap tu:";
    cin>>X.ts;
    do
    { cout<<"nhap mau:";
      cin>>X.ms;
      if ( X.ms == 0)
      {
        cout<<"nhap lai mau so:";
      }
    } while (X.ms ==0);  
}

int main(){
    PHANSO X,Y;
    Nhap(X);
    Nhap(Y);
    float hieuu = hieu(X,Y);
    float tichh = tich(X,Y);
    float tongg = tong(X,Y);
    Xuat(X);
    Xuat(Y);
    cout<<"\n Tong:"<<tongg;
    cout<<"\n Hieu:"<<hieuu;
    cout<<"\n Tich:"<<tichh;
    return 1;
}
