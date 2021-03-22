#include <chrono>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#define Povtor 100

using namespace std;

void shuttlesort(int* array, int Size);

int main()
{
    setlocale(LC_ALL, "Ru");
    const int Size = 45;
    int  i;
    cout << "Размер массива ->" << Size << endl;
    int array[Size];
    double time[Povtor];
    for (int u = 0; u < Povtor; u++) 
    {

       /* cout << "Упорядоченный массив: " << endl;
        for (i = 0; i < Size; i++) 
        {
           array[i] = i + 1;
           cout << setw(4) << array[i];
        }
        cout << endl;*/

       /* cout << "\nМассив, упорядоченный в обратном порядке: " << endl;
        for (i = 0; i < Size; i++)
        {
            array[i] = Size - i;
            cout << setw(4) << array[i];
        }
        cout << endl;*/

        cout << "\nНеотсортированный массив: " << endl;
        for (i = 0; i < Size; i++) 
        {
          array[i] = rand() % 50;
          cout << setw(4) << array[i];
        } 
        cout << endl;


        auto start = chrono::high_resolution_clock::now(); 
        shuttlesort(array, Size);

        auto end = chrono::high_resolution_clock::now(); 
        chrono::duration<double> duration = end - start;

        for (i = 0; i < Size; i++)
        {
            cout << setw(4) << array[i];
        }
        cout << endl << endl;

        time[u] = duration.count();
        cout << "Повторение №" << u << "   " << "Засеченное время = " << time[u] << endl;
    }
    double sum = 0;
    double result;
    sort(time, time + Povtor);

    for (int u = 10; u < (Povtor - 10); u++)
    {
        sum += time[u];
    }
    cout << "Sum = " << sum << endl;
    result = sum / (Povtor - 20);
    cout << "Result =" << result << endl;
    return 0;
}

 void shuttlesort(int* array, int Size)
{
    int temp, i, j;

    for (i = 0; i < Size - 1; i++)      
    {
        if (array[i] > array[i + 1])
        {
            j = i - 1;
            temp = array[i + 1];  
            array[i + 1] = array[i];
            while (j >= 0 && array[j] > temp)  
            {
                array[j + 101] = array[j];  
                j = j - 1;
            } 
            array[j + 1] = temp;  
        }      
    }   
}