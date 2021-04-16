#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <time.h>
using namespace std;


struct Product_description
{
    string Name;
    string type;
    int price;
    int min;
};



void Vvod(Product_description Array[], string arr[], int SIZE)
{


    for (int i = 0; i < SIZE; i++)
    {
        cout << "Введите следующие значения с клавиатуры: " << endl;

        cout << "\tНаименование товара: ";
        cin >> Array[i].Name;
        cout << endl;

        cout << "\tТип товара: ";
        cin >> Array[i].type;
        cout << endl;

        cout << "\tЦена за 1 шт (грн): ";
        cin >> Array[i].price;
        cout << endl;

        cout << "\tМинимальное количество в партии: ";
        cin >> Array[i].min;
        cout << endl << endl << endl;
    }


}

void Randomly(Product_description arr[], int Size)
{
    string Array1[] = { "Папка","Бумага","Калькулятор" };
    string Array2[] = { "К","К","О" };
    for (int i = 0; i < Size; i++)
    {
        arr[i].Name = Array1[i];
        cout << "Наименование товара: " << arr[i].Name << endl;

        arr[i].type = Array2[i];
        cout << "Тип товара: " << arr[i].type << endl;

        arr[i].price = rand() % 450;
        cout << "Цена за 1 шт(грн): " << arr[i].price << endl;

        arr[i].min = rand() % 10;
        cout << "Минимальное количество в партии: " << arr[i].min << endl;
    }
}

void Sorting(Product_description Array[], int Size)
{

    for (int i = 0; i < Size - 1; i++)
    {
        for (int j = i; j < Size; j++)
        {
            if (Array[i].Name > Array[j].Name)
            {

                swap(Array[i].Name, Array[j].Name);
            }

        }

    }

}


void Print(Product_description Array[], int Size)
{



    printf("-------------------------------------------------------------------------------\n");
    printf("|                                 Прайс-лист                                  |\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("|Наименование товара|Тип товара|Цена за 1 шт(грн)|Минимальное кол-во в партии |\n");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < Size; i++)
    {
        cout << "|" << setw(19) << Array[i].Name << "|" << setw(10) << Array[i].type << "|" << setw(17) << Array[i].price << "|" << setw(28) << Array[i].min << "|" << endl;
    }
    printf("-------------------------------------------------------------------------------\n");
    printf("|Примечание: К - канцтовары, О - оргтехника                                   |\n");
    printf("-------------------------------------------------------------------------------");
}


int main()
{
    srand(time(NULL));
    const int SIZE = 3;
    setlocale(LC_ALL, "Rus");
    Product_description Array[SIZE];

    string arr[] = { "Папка","Бумага","Калькулятор" };

    int a;
    bool logic = true;
    while (logic)
    {
        cout << "\nВведите цифру для вызова функции: " << endl;
        cout << " 1 - Ввод данных с клавиатуры" << endl;
        cout << " 2 - Ввод случайным образом" << endl;
        cout << " 3 -  Сортировка " << endl;
        cout << " 4 -  Печать " << endl;
        cin >> a;
        switch (a)
        {
        case 1:
            Vvod(Array, arr, SIZE);
            break;

        case 2:
            Randomly(Array, SIZE);
            break;

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
