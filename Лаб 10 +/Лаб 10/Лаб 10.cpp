#include <iomanip>
#include <iostream>
#include <time.h>
using namespace std;
#define N 3
#define M 3
void fun(int mas[]);
int main()
{
    setlocale(LC_ALL, "rus");
    int ar[N * M];
    //int size;
    cout << "Одномерный массив" << endl;
    for (int i = 0; i < N * M; i++) 
    {
        ar[i] = rand() % 10 + 1;
        cout << ar[i] << " ";
    }
    cout << endl;



    fun(ar);
    cout << "Одномерный массив после функции" << endl;
    for (int i = 0; i < N * M; i++) 
    {
        cout << ar[i] << " ";
    }

}

void fun(int mas[]) 
{
    setlocale(LC_ALL, "rus");
    int max;
    int mas2[N][M];

    cout << endl << "Вывод двумерного массива" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++) 
        {
            mas2[i][j] = mas[i * M + j];
            cout << setw(4) << mas2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << endl;

    int x = 0;
    cout << "Новый массив после преобразований" << endl;
    for (int i = 0; i < N; i++)
       
    {
        max = mas2[i][0];
        for (int j = 0; j < M; j++)
        {

            if (mas2[i][j] < max) 
            {
                max = mas2[i][j];
                x = j;
            }

        }

        for (int j = 0; j < N; j++)
        {

            mas2[i][j] = mas2[i][j] + max;

        }

        cout << "Минимальное число в строке № " << i << " = " << max << endl;
        max = mas2[i][0];

    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {

            cout << setw(4) << mas2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            mas[i * M + j] = mas2[i][j];
        }
        
    }
    
}

