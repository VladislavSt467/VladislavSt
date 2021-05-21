#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>


using namespace std;

#define PRINT_TYPE
#define DEBUG

const int SIZE = 3;
struct Product_description
{
    char Name[12];
    char type[2];
    int price;
    int min;
};

void Vvod(Product_description Array[], char arr[], int Size);
void Randomly(Product_description Array[], int Size);
void Sorting(Product_description Array[], int Size);
void Print(Product_description Array[], int Size);


