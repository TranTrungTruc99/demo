#include <iostream>
using namespace std;
int main()
{
    int namnhuan,i,d,m,y,hy,sngay=0,dem=0;
    cout<<"nhap d";
    cin>>d;
    cout<<"nhap m";
    cin>>m;
    cout<<"nhap y";
    cin>>y;
    const int dn=17; 
    const int mn=8;
    const int yn=2022;
    hy=y-yn;
    if (hy>0)
    {
        for ( i = 2022; i <y; i++)
        {
            namnhuan=i%4;
            if (namnhuan==0)
            {
                sngay=sngay+366;
                dem++;
            }
            else
            {
                sngay=sngay+365;
            }   
        }   
    }
    else 
    {
        for ( i = y; i <2022; i++)
        {
            namnhuan=i%4;
            if (namnhuan==0)
            {
                sngay=sngay+366;
                dem++;
            }
            else
            {
                sngay=sngay+365;
            } 
        }
    }
    for ( i = 1; i < m; i++)
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:   sngay=sngay+31; break;
            case 4: case 6: case 9: case 11:   sngay=sngay+30; break;
            break;
    
        default: sngay=sngay+28;
            break;
        }
        /* code */
    }
    
    cout<<sngay;
    return 0;
}
