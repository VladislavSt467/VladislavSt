#include "Header.h"


int main()
{
    srand(time(NULL));
    const int SIZE = 3;
    setlocale(LC_ALL, "Rus");
    Product_description Array[SIZE];

    char arr[3][12] = { "Папка","Бумага","Калькулятор" };

    int a;
    bool logic = true;
    while (logic)
    {
        cout << "\nВведите цифру для вызова функции: " << endl;
#ifndef PRINT_TYPE
        cout << " 1 - Ввод данных с клавиатуры" << endl;
#endif
#ifdef PRINT_TYPE
        cout << " 2 - Ввод случайным образом" << endl;
#endif
        cout << " 3 -  Сортировка " << endl;
        cout << "  4 -  Печать " << endl;
        cin >> a;
        switch (a)
        {
#ifndef PRINT_TYPE
        case 1:
            Vvod(Array, arr[2], SIZE);
            break;
#endif
#ifdef PRINT_TYPE
        case 2:
            Randomly(Array, SIZE);
            break;
#endif
        case 3:
            Sorting(Array, SIZE);
            break;

        case 4:
            Print(Array, SIZE);
            break;

        default:
            cout << "Ошибка\n";
            logic = false;
            break;
        }
    }
    return 0;
}