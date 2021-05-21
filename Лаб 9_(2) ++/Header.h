#pragma once

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <conio.h>
#include <ctime>
#include <random>
#include <Windows.h>
#include <fstream>
#include <wincrypt.h>

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
	void pop_front();
	void pop_back();
	void clear();

	void Insert(Data data, int index);
	void RemoveAt(int index);
	void Show_front();
	void Show_back();
	void ShowForIndex(int index);
	void Sort();

	void Category(int choice, int pStart);
	void CPrice_front(int choice);
	void CPrice_back(int choice);
	void CType_front(int choice);
	void CType_back(int choice);


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
		Node* pPrevious;

		Data data;

		Node(Data data = Data(), Node* pNext = nullptr, Node* pPrevious = nullptr)
		{

			this->data = data;
			this->pNext = pNext;
			this->pPrevious = pPrevious;
		}
	};

	int Size;

	Node* Head;
	Node* Tail;
};
