#include <iostream>
#include <string>
using namespace std;
/*string hoten;
int toan;
int van;
float dtb;*/
void nhap(string&, int&, int&);
void xuly(int, int, float&);
void xuat(string, int, int, float);
int main()
{
    int t, v;
    string ht;
    float dtb;
    nhap(ht, t, v);
    xuly(t, v, dtb);
    xuat(ht, t, v, dtb);
    return 1;
}
void xuat( string hoten, int toan, int van, float dtb)
{
    cout << "\n ho va ten:" << hoten;
    cout << "\n diem toan:" << toan;
    cout << "\n diem van:" << van;
    cout << "\n diem trung binh" << dtb;
}
void nhap(string &hoten, int &toan, int &van)
{
    cout << "\n ho va ten:";
    getline(cin,hoten);
    cout << "\n diem toan:";
    cin >> toan;
    cout << "\n diem van:";
    cin >> van;
}
void xuly(int toan, int van, float &dtb)
{
    dtb = (float) (toan + van)/2;
}