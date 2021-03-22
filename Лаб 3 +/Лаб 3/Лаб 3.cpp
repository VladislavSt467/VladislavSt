#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
    setlocale(LC_ALL, "rus");
    double x, y;
    double a = 12.5, n = 1.3;
    double t1, t2;
    double ax;
    printf("Введите x, y >");
    scanf_s("%lf %lf", &x, &y);
    ax = a * x;
    double a3;
    a3 = a * a * a;
    double x3;
    x3 = x * x * x;
    t1 = 1 / (3 * a3 * y) + (1 / 3 * a3 * a3) * log(x3 / y);
    t2 = 1 / a * (1 / (n - 1) / pow(cos(ax), n - 1)) - 1 / (n - 1) / pow(cos(ax), n - 3);
    printf("t1 = %lg\n", t1);
    printf("t2 = %lg\n", t2);
    return 0;
}






