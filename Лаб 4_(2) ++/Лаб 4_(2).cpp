//Одномерные динамические массивы и указатели
//Используя наработки ЛР №3 разбить проект на 2 функции
//(заполнение массива и задание по варианту) и файлы.Работать с динамическим массивом.


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
	cout << "Исходный массив." << endl;
	Filling(Array, SIZE);
	Print(Array, SIZE);

	cout << "Результирующий массив." << endl;
	int sizeArr2 = Transform(Array, Array2);
	Print(Array2, sizeArr2);
	cout << "\n Изменнённый исходный массив." << endl;
	Print(Array, SIZE);

	return 0;

}