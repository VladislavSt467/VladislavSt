#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <algorithm>
#include <stdlib.h>
#define Povtor 100

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int max, min, L, k, N;
    //const int N = 5;
    const int D = 200;
    double B[D];
    cout << "Введите размер массива:" << endl;
    cin >> N;
    int* A = new int[N];
    double time[Povtor];
    for (int n = 0; n < Povtor; n++)
    {
        max = INT_MIN;
        min = INT_MAX;
       cout << "Неупорядоченный массив:" << endl;
        for (int i = 0; i < N; i++) 
        {
            A[i] = rand() % 50;
            cout << setw(4) << A[i];
        }  
        cout << endl;
        /*cout << "Упорядоченный массив:" << endl;
        for (int i = 0; i < N; i++)
        {
            A[i] = i + 1;
            cout << setw(4) << A[i];
        }
        cout << endl;*/
        /*cout << "Массив, упорядоченный в обратном порядке:" << endl;
        for (int i = 0; i < N; i++)
        {
            A[i] = N - i;
            cout << setw(4) << A[i];
        }
        cout << endl;*/
        auto start = chrono::high_resolution_clock::now();
        for (int i = 0; i < N; i++) 
        {
            if (A[i] > max)
                max = A[i];
            if (A[i] < min)
                min = A[i];
        }
        L = max - min + 1;
        int* B = new int[L];
        for (int i = 0; i < L; i++)
        {
            B[i] = 0;
        }
        for (int i = 0; i < N; i++) 
        {
            B[A[i] - min]++;
        }
        k = 0;
        for (int i = 0; i < L; i++) 
        {
            for (int j = 0; j < B[i]; j++)
            {
                A[k++] = i + min;
            }
        }
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        time[n] = duration.count();

        printf("\n№=  %d  Длительность:  %f\n", n, time[n]);

        cout << "Массив после сортировки:" << endl;
         for (int i = 0; i < N; i++)
         {
           cout << setw(4) << A[i];
         }
         cout << endl;
        delete[] B;
    }
    double sum = 0;
    double result;
    sort(time, time + Povtor);

    for (int u = 10; u < Povtor - 10; u++) 
    {
        sum += time[u];
    }
    cout << "Sum" << sum << endl;
    result = sum / (Povtor - 20);
    cout << "Result " << result << endl;

    delete[] A;

}