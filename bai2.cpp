#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    int b;
    int tong,tich,hieu,thuong;
    printf("nhap a:");
    scanf("%d", &a);
    printf("nhap b:");
    scanf("%d", &b);
    tong = a+b;
    hieu = a-b;
    tich = a*b;
    thuong = a%b;
    printf("tong:%d", tong);
    printf("hieu:%d", hieu);
}
