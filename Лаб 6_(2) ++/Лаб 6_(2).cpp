//� �������� � ������������� ��������.
//� ������� ��� ��������� �������� �� ���������� ���� ������.
//������� ����������� ������� ������ �������� ����������� �������� ������ ������, ������� � �������� �������
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
	printf("������� ������ �1 (������� Enter �������� ����): ");


	
	strEnter(arr1);

	printf("��������� ������: ");
	printf("%s", arr1);

	printf("\n");
	
	int strl1 = strleng(arr1);

	printf("������ ������: %d", strl1);

	printf("\n");
	if (strl1 <= 0)
	{
		printf("\n");
		printf("	DEBUG: ������ ������ �� ������������� �������, ���������� ��� ���");
		goto tryagain;
	}
	if (strl1 > size)
	{
		printf("\n");
		printf("	DEBUG: ������ ������ ������, ��� ���������, ���������� ��� ���");
		goto tryagain;
	}
	printf("\n\n");

	



	
	printf("\n");
	printf("������� ������ �2 (������� Enter �������� ����): ");

	strEnter(arr2);
	printf("��������� ������: ");
	printf("%s", arr2);

	printf("\n");
	
	printf("������ ������: %d", strleng(arr2));
	printf("\n");

	int strl2 = strleng(arr2);
	if (strl2 <= 0)
	{
		printf("\n");
		printf("	DEBUG: ������ ������ �� ������������� �������, ���������� ��� ���");
		goto tryagain;
	}
	if (strl2 > size)
	{
		printf("\n");
		printf("	DEBUG: ������ ������ ������, ��� ���������, ���������� ��� ���");
		goto tryagain;
	}
	printf("\n\n");






tryagain2:
	
	printf("\n");
	int p, n;
	printf("������� �������, � ������� ������� ������ ������: ");
	scanf_s("%d", &p);
	printf("\n");

	if (p > strl1)
	{
		printf("\n");
		printf("	DEBUG: ����������� ���� ������� ��� ���-�� ��������, ���������� ��� ���");
		printf("\n");
		goto tryagain2;
	}
tryagain3:
	printf("������� ���-�� ��������, ������� ������� ��������: ");
	scanf_s("%d", &n);
	printf("\n");

	if (n > (strl1 | strl2))
	{
		printf("\n");
		printf("	DEBUG: ����������� ���� ������� ��� ���-�� ��������, ���������� ��� ���");
		printf("\n");
		goto tryagain3;
	}
	




	Task(arr1, arr2, p, n);


	printf("�������� ������ : %s", arr1);
	delete[]arr1;
	delete[]arr2;
	return 0;
}


