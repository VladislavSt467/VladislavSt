#include "Header.h"


#ifdef DEBUG
void mas12(int* arr, int size)
{
    cout << endl;
    cout << "Матрица:" << endl;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            *(arr + i * j) = rand() % 50;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << left << setw(3) << *(arr + i * j);
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i + j != size - 1)
                *(arr + i * j) = *(arr + (size - i - 1) * (size - j - 1));
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << left << setw(3) << *(arr + i * j);
        cout << endl;
    }

}





#endif

#ifndef DEBUG
void mas22(int** array, int size)
{
    cout << endl;
    cout << "Матрица:" << endl;

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            *(*(array + i) + j)  = rand() % 50;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << left << setw(3) << *(*(array + i) + j);
        cout << endl;
    }

    cout << endl << endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(i + j != size - 1)
                *(*(array + i) + j) = array[size - i - 1][size - j - 1];
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++)
            cout << left << setw(3) << *(*(array + i) + j);
        cout << endl;
    }

}
#endif