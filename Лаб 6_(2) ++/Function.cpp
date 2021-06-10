#include "Header.h"


void strEnter(char* arr)
{
	for (int i = 0; ; i++)
	{
		int t = getchar();

		if (t == '\n')
		{
			*(arr + i) = '\0';
			break;
		}

		*(arr + i) = t;
	}
}

int strleng(char* arr)
{
	for (int i = 0; ; i++)
	{
		if (*(arr + i) == '\0')
		{
			return i;
		}
	}
}


void Task(char* arr1, char* arr2, int p, int n)
{
	



	for (int i = (p - 1), j = 0; n != 0; i++, j++, n--)
	{
		if (*(arr1 + i) == '\0')
		{
			break;
		}
		*(arr1 + i) = *(arr2 + j);

	}


}