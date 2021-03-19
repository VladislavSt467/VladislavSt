#include <stdio.h>
#include <iostream>
#include <math.h>

int main() 
{
    setlocale(LC_ALL, "rus");

    long n;
    double dbln;
    double term;
    double sum = 0;
    short k1 = 1;
    const double eps = 0.0000001;
    for (n = 0; ; n++, k1 = -k1)
    {
        dbln = n;
        term = k1 * (4 / (dbln * dbln + 3));
        if (fabs(term) >= eps)
            sum += term;
        else break;
        if (n == 9)
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);
    }
    printf("Полная сумма ряда = %10.7lf\n", sum);
    return 0;
}
