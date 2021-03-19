#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string>
#include <iomanip>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
     int mas[] = { 1, 2, 3, 2, 1, -4, -3, 2 };
    int N = sizeof(mas) / sizeof(int);
    srand(time_t(NULL));
    

    for (int i = 0; i < N; i++) 
    {
         mas[i] = rand() % 101 - 50;
        cout << setw(4) << mas[i];
    }
    cout << endl << endl;

    for (int i = 0; i < N - 1; ++i) 
    {
        if (i == 0) 
        {
            if (mas[i + 1] < mas[i])
                cout << i << endl;
        }
        else
            if (mas[i] > mas[i - 1] && mas[i] >= mas[i + 1])
                cout << "Номер элемента_" << i << endl;
    }
    cout << endl;
}
