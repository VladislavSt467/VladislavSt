/*
� �������� ����� �� 10 ����� ���������,
���� 5 ����� � ������, �������� ��� ����� �� ���� 	������ 77,
���� �������� � ��� ����� ����� ���� ������ 88.
*/

#include"Numbers.h"

int main()
{
	setlocale(LC_ALL, "ru");

	Numbers* A;

	while (true) {

		A = new Numbers;

		A->tofile();
		cout << "\n����� �� ��������: " << endl;

		A->fromFile();

		A->condition();
		cout << "\n����� ����� ��������: " << endl;
		A->fromFile();

		system("pause");
		delete A;
	}

}