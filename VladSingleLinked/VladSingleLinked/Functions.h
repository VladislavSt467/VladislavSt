#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
#include <random>
#include <Windows.h>
#include <fstream>

using namespace std;

struct Data
{
	string name;
	string type;
	int price;
	int min;
};

class List
{
public:

	List();
	~List();

	void push_front(Data data);
	void push_back(Data data);
	void insert(Data data, int index);
	void pop_front();
	void pop_back();
	void removeAt(int index);
	void clear();
	void Sort();


	void Category(int choice);
	void CPrice(int choice);
	void CType(int choice);

	void Show();
	void ShowForIndex(int index);

	void AddToFile();
	void TakeOfFile();	

	void SetObj(Data data, int index);
	void GetObj(Data& data, int index);
	int GetSize() { return Size; }

private:


	class Node
	{

	public:

		Node* pNext;
		Data data;

		Node(Data data = Data(), Node* pNext = nullptr)
		{
			this->data = data;

			this->pNext = pNext;
		}
	};

	int Size;
	Node* Head;
};