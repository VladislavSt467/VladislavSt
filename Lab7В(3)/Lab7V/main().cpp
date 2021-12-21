/*
¬ бинарном файле из 10 чисел проверить,
если 5 число Ц четное, заменить все числа до него 	числом 77,
если нечетное Ц все числа после него числом 88.
*/

#include"Numbers.h"

int main()
{
	setlocale(LC_ALL, "ru");

	Numbers* A;

	while (true) {

		A = new Numbers;

		A->tofile();
		cout << "\n„исла до проверки: " << endl;

		A->fromFile();

		A->condition();
		cout << "\n„исла после проверки: " << endl;
		A->fromFile();

		system("pause");
		delete A;
	}

}