#include <stdio.h>
#include <conio.h>

int main()
{
   int soluong;
    int dongia;
    float thue; 
    int tien;
    printf("so luong: ");
    scanf("%d", &soluong);
    printf("don gia: ");
    scanf("%d", &dongia);
    tien = soluong*dongia;
    thue = 0.1*tien;
    printf("tien: %d", tien);
    printf("thue: %2f", thue);
    _getch();  
}
