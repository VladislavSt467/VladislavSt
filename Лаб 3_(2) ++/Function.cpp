#include "Header.h"

void Filling(int* mas, int size)
{
	for (int i = 0; i < size; i++)
		*(mas + i) = rand() % 100 - 50;
}

int Transform(int* mas, int* &mas2)
{
	int size = 0, min = INT_MAX;
	for (int i = 0; i < SIZE; i++)
	{
		if (*(mas + i) < min)
			min = *(mas + i);
		if (*(mas + i) >= 0)
			size++;
	}
	int numb;
	mas2 = new int[size];
	for (int i = 0, counter = 0; i < SIZE; i++)
	{
		if (*(mas + i) < 0)
			*(mas + i) = min;
		if (*(mas + i) >= 0)
		{
			numb = *(mas + i);
			mas2[counter++] = numb;
		}
	}

	return size;
}

void Print(int* mas, int size)
{
	for (int i = 0; i < size; i++)
		cout << *(mas + i) << " ";
	cout << endl;
}