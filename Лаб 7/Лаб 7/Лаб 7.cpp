#include <math.h>
#include <iostream>
#include <stdio.h>
#include <cstdlib>


using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    short n;
    double x;
    double y;
    short h;
    for (n = 0; n < 4; n++)
    {
        printf("|   x   |      y     |\n");
        printf("|-------|------------|\n");
        for (x = 0; x <= 5; x += 0.25) 
        {
            if (x < 1) y = -sqrt(1 - x * x);

            else if (x < 5) y = sqrt(4 - (x - 3) * (x - 3));

            else if (x <= 5) y = 0;
            else if (x <= 5) y = -1;
            printf("| %5.2lf | %10.7lf | ", x + n * 5, y);
            h = (y + 1) * 10;
            if (y - 1 - h * 10 > 0.5) h++;
            for (; h > 0; h--) printf(" ");
            printf("*\n");
        }
        printf("Нажмите клавишу Enter...");
        getchar();
    }
}