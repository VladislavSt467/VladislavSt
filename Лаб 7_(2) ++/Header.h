#pragma once
#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
struct Product_description
{
    char Name[12];
    char type[2];
    int price;
    int min;
};

void vvodIzapis(Product_description Папка, Product_description Бумага, Product_description Калькулятор);

void randomly(Product_description Папка, Product_description Бумага, Product_description Калькулятор);

void vnachalo();

void vkonec(Product_description Папка, Product_description Бумага, Product_description Калькулятор);

void ponomery(int temp);

void vse();

