#include <iostream>
using namespace std;
class CDate
{
    private:
        int ngay;
        int thang;
        int nam;
    public:
        void Nhap();
        void Xuat();
        void Xuly();
        bool NamNhuan();
};
int main()
{
    CDate a;
    cout<<"nhap date:\n";
    a.Nhap();
    a.Xuly();
    cout<<"ngay ke tiep:\n";
    a.Xuat();
    return 1;
}
void CDate::Nhap()
{
    cout<<"nhap ngay:";
    cin>>ngay;
    cout<<"nhap thang:";
    cin>>thang;
    cout<<"nhap nam:";
    cin>>nam;
}
void CDate::Xuat()
{
    cout<<"\nngay:"<<ngay;
    cout<<"\nthang:"<<thang;
    cout<<"\nnam:"<<nam;
}
bool CDate::NamNhuan()
    {
        if ((nam % 4 == 0) and (nam % 100 != 0) or (nam % 100 == 0) and ( nam % 400 == 0))
            return true;
        else
            return false;   
    }
void CDate::Xuly()
{
    if (this->NamNhuan() == true)
    {
        if (((thang == 2) and (ngay != 29)) or ((thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 ) and (ngay != 31)) 
            or ((thang == 4 or thang == 6 or thang == 9 or thang == 11) and (ngay !=30)) or ((thang == 12) and (ngay !=31)))
            {
                ngay++;
            }
        if ((thang == 2) and (ngay ==29))
            {
                ngay = 1;
                thang++;
            } 
        if ((thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 ) and (ngay == 31))
            {
                thang++;
                ngay = 1;
            }
        if ((thang == 4 or thang == 6 or thang == 9 or thang == 11) and (ngay ==30))
            {
                thang++;
                ngay = 1;
            }
        if (( thang == 12 ) and (ngay == 31))
            {
                ngay = 1;
                thang = 1;
                nam++;    
            }
    }    
    if (this->NamNhuan() == false)
    {
        if (((thang == 2) and (ngay != 28)) or ((thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 ) and (ngay != 31)) 
            or ((thang == 4 or thang == 6 or thang == 9 or thang == 11) and (ngay !=30)) or ((thang == 12) and (ngay !=31))) 
            {
                ngay++;
            }
        // if ((x.thang > 12 or x.thang < 1))
    //         return;
        if ((thang == 2) and (ngay ==28))
            {
                ngay = 1;
                thang++;
            } 
        if ((thang == 1 or thang == 3 or thang == 5 or thang == 7 or thang == 8 or thang == 10 ) and (ngay == 31))
            {
                thang++;
                ngay = 1;
            }
        if ((thang == 4 or thang == 6 or thang == 9 or thang == 11) and (ngay ==30))
            {
                thang++;
                ngay = 1;
            }
        if (( thang == 12 ) and (ngay == 31))
            {
                ngay = 1;
                thang = 1;
                nam++;    
            }
        
    }
    return;
}