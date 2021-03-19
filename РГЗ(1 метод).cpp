#include<iostream>
#include<ctime>
#include<chrono>
#include<algorithm>
#define K 10
#define N 1
using namespace std;

//функция для обмена значений ячеек
void swap(int* arr, int i)
{
    int buff;
    buff = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = buff;
}

//функция челночной сортировки
void Shuttle_sort(int* arr, int size)
{
    int left = 1;
    int right = size - 1;
    while (left <= right)
    {
        for (int i = right; i >= left; i--)
            if (arr[i - 1] > arr[i]) swap(arr, i);
        left++;


        for (int i = left; i <= right; i++)
            if (arr[i - 1] > arr[i]) swap(arr, i);
        right--;

    }
}

int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    double l_dur = 0, arr1[N + 10]; 
    int size = rand() % 50;
    int* A = new int[size]; 

    for (int k = 0; k < size; k++)
    {
        A[k] = size - k; 
        cout << A[k] << " ";
    }

    Shuttle_sort(A, size); 

    cout << "\nМассив после сортировки:\n";
    for (int k = 0; k < size; k++)
    {
        cout << A[k] << " ";
    }
    cout << endl;
    for (int k = 0; k < N; ++k) 
    {
        
        auto start = chrono::high_resolution_clock::now();
        Shuttle_sort(A, K);
        auto end = chrono::high_resolution_clock::now();
        chrono::duration<double> duration = end - start;
        arr1[k] = duration.count();

        printf("\nДлительность: %.7f\n", arr1[k]);
    }
}