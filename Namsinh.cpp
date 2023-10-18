#include <stdio.h>
#include <conio.h>

int main()
{
    int namsinh;
    int tuoi;
    printf("Nhap nam sinh");
    scanf("%d", &namsinh);
    tuoi = 2022 - namsinh;
    printf("Tuoi:%d", tuoi);
}
