#include "Header.h"
#include <iomanip>
using namespace std;


void Vvod(Product_description Array[], char arr[], int SIZE)
{
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Расположение файла: " << __FILE__ << endl << "Имя текущей функии: " << __FUNCTION__ << endl;
#endif

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
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Расположение файла: " << __FILE__ << endl << "Имя текущей функии: " << __FUNCTION__ << endl;
#endif
    string Array1[] = { "Папка","Бумага","Калькулятор" };
    string Array2[] = { "К","К","О" };
    for (int i = 0; i < Size; i++)
    {
        
        strcpy(arr[i].Name, Array1[i].c_str());
        //arr[i].Name = Array1[i];
        cout << "Наименование товара: " << arr[i].Name << endl;

        strcpy(arr[i].type, Array2[i].c_str());
        //arr[i].type = Array2[i];
        cout << "Тип товара: " << arr[i].type << endl;

        arr[i].price = rand() % 450;
        cout << "Цена за 1 шт(грн): " << arr[i].price << endl;

        arr[i].min = rand() % 10;
        cout << "Минимальное количество в партии: " << arr[i].min << endl;
    }
}

void Sorting(Product_description Array[], int Size)
{
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Расположение файла: " << __FILE__ << endl << "Имя текущей функии: " << __FUNCTION__ << endl;
#endif
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
#ifdef DEBUG 
    cout << endl << "Дата: " << __DATE__ << endl << "Текущее время: " << __TIME__ << endl << "Расположение файла: " << __FILE__ << endl << "Имя текущей функии: " << __FUNCTION__ << endl;
#endif

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
