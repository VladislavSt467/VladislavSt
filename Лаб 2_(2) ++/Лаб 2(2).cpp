#include "Header.h"


int main()
{
    srand(time(NULL));
    const int SIZE = 3;
    setlocale(LC_ALL, "Rus");
    Product_description Array[SIZE];

    char arr[3][12] = { "�����","������","�����������" };

    int a;
    bool logic = true;
    while (logic)
    {
        cout << "\n������� ����� ��� ������ �������: " << endl;
#ifndef PRINT_TYPE
        cout << " 1 - ���� ������ � ����������" << endl;
#endif
#ifdef PRINT_TYPE
        cout << " 2 - ���� ��������� �������" << endl;
#endif
        cout << " 3 -  ���������� " << endl;
        cout << "  4 -  ������ " << endl;
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
            cout << "������\n";
            logic = false;
            break;
        }
    }
    return 0;
}