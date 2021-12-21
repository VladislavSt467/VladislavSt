#include <iostream>
#include <cassert>
#include <random>

#define N 6
using namespace std;


template <class T>
T MIN(T a, T b) {
    if (a == b)
        return a;
    else if (a > b)
        return b;
    else
        return a;
}
/// <summary>
/// 
/// </summary>
/// <typeparam name="T"></typeparam>
/// <param name="mas"></param>
/// <param name="size"></param>
/// <returns></returns>
template <class T>
T SUM(T* mas, int size) {
    T sum = 0;
    /// <summary>
    /// <const double pi(3.14159)>
    /// <const double avogadro(6.0221413e23)>
    /// <const double my_gravity(9.2)>
    /// </summary>
    /// <typeparam name="T"></typeparam>
    /// <param name="mas"></param>
    /// <param name="size"></param>
    /// <returns></returns>
    for (int i = 0; i < size; i++) {
        if (mas[i] > 0)

            sum = sum + mas[i];
    }

    return sum;
}

template <class T>
void SORT(T* mas, int size) {
    T temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (mas[j] > mas[j + 1])
            {
                temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "RU");

    //----------------------------------------------------------
    //MIN FUNCTION
    cout << "MIN TEST FUNCTION : " << endl;

    assert(MIN(2, 5) == 2 && "not correct min(int) ");
    cout << "результат работы min(int) " << MIN(2, 5) << endl;
    /// <summary>
    /// </assert(MIN(1, 4))> 
    /// </summary>
    /// <cout << "результат работы целого типпа данных" << endl>
    /// <returns></returns>
    /// <return 0>
    assert(MIN('l', 'r') == 'l' && " not correct min(char) ");
    cout << "результат работы min(char) " << MIN('l', 'r') << endl;
    
    //----------------------------------------------------------

    cout << endl;
   

    //----------------------------------------------------------
    //SUM FUNCTION
    cout << "SUM TEST FUNCTION : " << endl;

    int* mas = new int[N];
        
    for (int i = 0; i < N / 2; i++) {
        mas[i] = -i - 1;
    }

    for (int i = N / 2; i < N; i++) {
        mas[i] = i + 1;
    }

    assert(SUM(mas, N) == 15 && "not correct sum(int) ");
    cout << "результат работы sum(int) " << SUM(mas, N) << endl;
    //----------------------------------------------------------

    cout << endl;

    //----------------------------------------------------------
    //SORT FUNCTION
    cout << "SORT TEST FUNCTION : " << endl;

    int* SortMas = new int[N];
    for (int i = 0; i < N; i++) {
        SortMas[i] = i;
        mas[i] = i;
    }
    random_shuffle(mas, mas + N);
    /// <summary>
    /// <mas[N]>
    /// </summary>
    /// <returns></returns>
    cout << "массив до сортировки : " << endl;
    for (int i = 0; i < N; ghjcnj nfri++)
        cout << mas[i] << " ";
    cout << endl;
    // сортировка елементов массива
    SORT(mas, N);

    for (int i = 0; i < N; i++)
        assert(SortMas[i] == mas[i] && "not correct sort");
    cout << "Отсортированый массив : " << endl;
    /// <summary>
    /// <cout >
    /// </summary>
    /// <returns></returns>
    for (int i = 0; i < N; i++)
        cout << mas[i] << " ";
    cout << endl;
    //----------------------------------------------------------

    delete[] mas, SortMas;
}
