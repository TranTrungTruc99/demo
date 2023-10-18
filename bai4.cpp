#include <stdio.h>
#include <conio.h>

int main()
{
    float toan;
    float ly;
    float hoa;
    float dtb;

    printf("diem toan: ");
    scanf("%f", &toan);
    printf("diem ly: ");
    scanf("%f", &ly);
    printf("diem hoa: ");
    scanf("%f", &hoa);
    dtb = ( toan * 3 + ly * 3  + hoa * 3 ) / 9;
    printf("diem trung binh: %2f", dtb);
    _getch();

}
