#include "Header.h"




int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "ru");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    Product_description �����{}, ������{}, �����������{};



  
    cout << "\t�������� ��������:\n";
    cout << "1 - ���� � ������ � ������ � ����.\n";
    cout << "2 - ���� ��������� ������� � ������ � ����.\n";
    cout << "3 - �������� ������ � ������ �����.\n";
    cout << "4 - �������� ������ � ����� �����.\n";
    cout << "5 - ������ ����� ������ �� ����� �� ������.\n";
    cout << "6 - ������ ���� ������� �� �����.\n";
    cout << "7 - ����� �� ���������.\n\n";
    while (true)
    {
        int a;
        cout << "������� �����: ";
        cin >> a;

        if (a == 1)
        {
            vvodIzapis(�����, ������, �����������);
        }
        else if (a == 2)
        {
            randomly(�����, ������, �����������);

        }
        else if (a == 3)
        {
            vnachalo();
        }
        else if (a == 4)
        {
            vkonec(�����, ������, �����������);
        }
        else if (a == 5)
        {
            int temp;
            cout << "������� ����� ������, ������� ������ �������: ";
            while (true)
            {
                cin >> temp;
                if (temp < 0 || temp >2)
                {
                    cout << "\n\t�������� ���� ������ �� ����������, ���������� ��� ���\n";

                }
                else break;
            }
            ponomery(temp);

        }
        else if (a == 6)
        {
            vse();
        }
        else if (a == 7)
        {
            exit(0);
        }

        cout << endl << endl;
    }
}
