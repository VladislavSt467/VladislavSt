#include <iostream>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL, "rus");
    double x, y;
    printf("Введите координату x >");
    scanf_s("%lf", &x);
    printf("Введите координату y >");
    scanf_s("%lf", &y);
  
    printf("x=%6.3lf;  y=%6.3lf\n", x, y);

    if ((x * x + y * y <= 1) || ((x <= 0 && x >= -1) && (y >= 0 && y <= 1)))
        printf("Точка попадает в область\n");
    else printf("Точка не попадает в область\n");
    return 0;
}


