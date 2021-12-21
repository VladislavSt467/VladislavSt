#include <iostream>
#include <iomanip>
#include <vector>
#include <cctype>
#include <cstdlib>
#include <string>
#include "ConfigOS.h"
#include "Control.h"

using namespace std;

int menu() {

    int number;
    ConfigOS met;

    cout << "1 Ввод " << endl;
    cout << "2 Печать" << endl;
    cout << "3 Добавить в конец" << endl;
    cout << "4 Удалить последний" << endl;
    cout << "5 Сортировка " << endl;
    cout << "6 Выход" << endl;

    cout << "ВВедите число : ";
    cin >> number;
    cout << endl;

    return number;
}

int ConfigOS::count_1 = 0;
int Control::count = 0;

int main() {

    system("chcp 1251");
    system("cls");
    
    srand(time(NULL));

    Control* control = nullptr;
    ConfigOS* configOS = nullptr;

    while (true) {
        int TargetMenu = menu();

        if (TargetMenu == 6)
            break;

        switch (TargetMenu)
        {
        case 1: {
            ConfigOS::count_1 = 0;

            control = new Control;

            cout << "Количество елементов добавить в таблицу : " << endl;
            int temp;
            cin >> temp;

            if (temp < 0)
                break;

            for (int i = 0; i < temp; i++) {
                configOS = new ConfigOS;
                cin >> *configOS;
                control->add_end(configOS);
            }

            system("pause");
            system("cls");

            break;
        }

        case 2: {    
            cout << control;

            system("pause");
            system("cls");

            break;
        }

        case 3: {
            configOS = new ConfigOS;
            cin >> *configOS;
            control->add_end(configOS);

            system("pause");
            system("cls");

            break;
        }

        case 4: {
            control->delete_end();

            system("pause");
            system("cls");

            break;
        }

        case 5: {
            cout << "Таблица до сортировки : " << endl;
            cout << control;

            control->Sort();

            cout << "Таблица после сортировки : " << endl;
            cout << control;

            system("pause");
            system("cls");

            break;
        }

        default: {
            cout << "Неверное значение" << endl;
            break;
        }

        }

    }

}
