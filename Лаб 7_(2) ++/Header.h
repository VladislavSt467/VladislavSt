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

void vvodIzapis(Product_description �����, Product_description ������, Product_description �����������);

void randomly(Product_description �����, Product_description ������, Product_description �����������);

void vnachalo();

void vkonec(Product_description �����, Product_description ������, Product_description �����������);

void ponomery(int temp);

void vse();

