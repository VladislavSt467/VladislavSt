//���������� ������������ ������� � ���������
//��������� ��������� �� �3 ������� ������ �� 2 �������
//(���������� ������� � ������� �� ��������) � �����.�������� � ������������ ��������.


#include "Header.h"
#include "Filling.h"
int main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

	int* Array = new int[SIZE]{};
	int* Array2 = new int[SIZE]{};
	//int* Array = (int*)malloc(SIZE * sizeof(int));
	//int* Array2 = (int*)malloc(SIZE * sizeof(int)); 
	cout << "�������� ������." << endl;
	Filling(Array, SIZE);
	Print(Array, SIZE);

	cout << "�������������� ������." << endl;
	int sizeArr2 = Transform(Array, Array2);
	Print(Array2, sizeArr2);
	cout << "\n ���������� �������� ������." << endl;
	Print(Array, SIZE);

	return 0;

}