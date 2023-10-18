#include <iostream>
#include <string>
using namespace std;

class CHocSinh
{
    private:
        string hoten;
        int toan;
        int van;
        float dtb;
    public:
        void nhap();
        void xuat();
        void xuly();
};
int main()
{
    CHocSinh hs;
    hs.nhap();
    hs.xuly();
    hs.xuat();
    return 1;
}
void CHocSinh::nhap()
{
    cout<<"nhap ho ten:";
    getline(cin, hoten);
    cout<<"nhap toan:";
    cin>>toan;
    cout<<"nhap van:";
    cin>>van;
}
void CHocSinh::xuly()
{
    dtb = (float)(toan + van)/2;
}
void CHocSinh::xuat()
{
    cout<<"\nHo ten:"<<hoten;
    cout<<"\nDiem toan:"<<toan;
    cout<<"\nDiem van:"<<van;
    cout<<"\nDiem trung binh:"<<dtb;
}

