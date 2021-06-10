#include "Filling.h"


void Filling(int* mas, int size)
{
#ifndef DEBUG
	for (int i = 0; i < size; i++)
		*(mas + i) = rand() % 100 - 50;
#endif
}