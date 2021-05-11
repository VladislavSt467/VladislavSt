#pragma once
#include <iostream>
#define strsize 255

using namespace std;

struct Opers
{
    char Name[strsize];
    char SUBD[strsize];
    int outmem;
    int minRam;
    int cost;

    Opers* next;
    Opers* prev;
};



void Create(Opers newdata);

void printfromstart();

void printfromend();

void criteriafromend(int choice);

void criteriafromstart(int choice);

void Add(int pos, Opers newdata);

void Delete(int pos);

void Sorting(int choice3);

void infile();

void Read();

int listsize();

void menu();
