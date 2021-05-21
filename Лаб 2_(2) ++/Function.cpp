#include "Header.h"
#include <iomanip>
using namespace std;


void Vvod(Product_description Array[], char arr[], int SIZE)
{
#ifdef DEBUG 
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������������ �����: " << __FILE__ << endl << "��� ������� ������: " << __FUNCTION__ << endl;
#endif

    for (int i = 0; i < SIZE; i++)
    {
        cout << "������� ��������� �������� � ����������: " << endl;

        cout << "\t������������ ������: ";
        cin >> Array[i].Name;
        cout << endl;

        cout << "\t��� ������: ";
        cin >> Array[i].type;
        cout << endl;

        cout << "\t���� �� 1 �� (���): ";
        cin >> Array[i].price;
        cout << endl;

        cout << "\t����������� ���������� � ������: ";
        cin >> Array[i].min;
        cout << endl << endl << endl;
    }


}

void Randomly(Product_description arr[], int Size)
{
#ifdef DEBUG 
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������������ �����: " << __FILE__ << endl << "��� ������� ������: " << __FUNCTION__ << endl;
#endif
    string Array1[] = { "�����","������","�����������" };
    string Array2[] = { "�","�","�" };
    for (int i = 0; i < Size; i++)
    {
        
        strcpy(arr[i].Name, Array1[i].c_str());
        //arr[i].Name = Array1[i];
        cout << "������������ ������: " << arr[i].Name << endl;

        strcpy(arr[i].type, Array2[i].c_str());
        //arr[i].type = Array2[i];
        cout << "��� ������: " << arr[i].type << endl;

        arr[i].price = rand() % 450;
        cout << "���� �� 1 ��(���): " << arr[i].price << endl;

        arr[i].min = rand() % 10;
        cout << "����������� ���������� � ������: " << arr[i].min << endl;
    }
}

void Sorting(Product_description Array[], int Size)
{
#ifdef DEBUG 
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������������ �����: " << __FILE__ << endl << "��� ������� ������: " << __FUNCTION__ << endl;
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
    cout << endl << "����: " << __DATE__ << endl << "������� �����: " << __TIME__ << endl << "������������ �����: " << __FILE__ << endl << "��� ������� ������: " << __FUNCTION__ << endl;
#endif

    printf("-------------------------------------------------------------------------------\n");
    printf("|                                 �����-����                                  |\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("|������������ ������|��� ������|���� �� 1 ��(���)|����������� ���-�� � ������ |\n");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < Size; i++)
    {
        cout << "|" << setw(19) << Array[i].Name << "|" << setw(10) << Array[i].type << "|" << setw(17) << Array[i].price << "|" << setw(28) << Array[i].min << "|" << endl;
    }
    printf("-------------------------------------------------------------------------------\n");
    printf("|����������: � - ����������, � - ����������                                   |\n");
    printf("-------------------------------------------------------------------------------");
}
