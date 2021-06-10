//– Работать с динамическими строками.
//– Сделать все возможные проверки на корректный ввод данных.
//Функция перекрывает символы строки заданным количеством символов другой строки, начиная с заданной позиции
#include "Header.h"




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//setlocale(LC_ALL, "rus");
tryagain:
	
	int size = 255;





	char* arr1 = new char[size];
	char* arr2 = new char[size];


	printf("\n\n");
	printf("|-----------------------------------------------------------------------|");
	printf("\n");
	printf("Введите строку №1 (нажатие Enter завершит ввод): ");


	
	strEnter(arr1);

	printf("Введенная строка: ");
	printf("%s", arr1);

	printf("\n");
	
	int strl1 = strleng(arr1);

	printf("Размер строки: %d", strl1);

	printf("\n");
	if (strl1 <= 0)
	{
		printf("\n");
		printf("	DEBUG: Размер строки не удовлетворяет условию, попробуйте еще раз");
		goto tryagain;
	}
	if (strl1 > size)
	{
		printf("\n");
		printf("	DEBUG: Размер строки больше, чем ожидалось, попробуйте еще раз");
		goto tryagain;
	}
	printf("\n\n");

	



	
	printf("\n");
	printf("Введите строку №2 (нажатие Enter завершит ввод): ");

	strEnter(arr2);
	printf("Введенная строка: ");
	printf("%s", arr2);

	printf("\n");
	
	printf("Размер строки: %d", strleng(arr2));
	printf("\n");

	int strl2 = strleng(arr2);
	if (strl2 <= 0)
	{
		printf("\n");
		printf("	DEBUG: Размер строки не удовлетворяет условию, попробуйте еще раз");
		goto tryagain;
	}
	if (strl2 > size)
	{
		printf("\n");
		printf("	DEBUG: Размер строки больше, чем ожидалось, попробуйте еще раз");
		goto tryagain;
	}
	printf("\n\n");






tryagain2:
	
	printf("\n");
	int p, n;
	printf("Введите позицию, с которой следует начать замену: ");
	scanf_s("%d", &p);
	printf("\n");

	if (p > strl1)
	{
		printf("\n");
		printf("	DEBUG: Некоректный ввод позиции или кол-ва символов, попробуйте еще раз");
		printf("\n");
		goto tryagain2;
	}
tryagain3:
	printf("Введите кол-во символов, которые следует заменить: ");
	scanf_s("%d", &n);
	printf("\n");

	if (n > (strl1 | strl2))
	{
		printf("\n");
		printf("	DEBUG: Некоректный ввод позиции или кол-ва символов, попробуйте еще раз");
		printf("\n");
		goto tryagain3;
	}
	




	Task(arr1, arr2, p, n);


	printf("Итоговая строка : %s", arr1);
	delete[]arr1;
	delete[]arr2;
	return 0;
}


