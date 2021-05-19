#include "Functions.h"

List::List()
{
	Size = 0;
	Head = nullptr;
}

List::~List()
{
	clear();
}


void List::push_front(Data data)
{
	Head = new Node(data, Head);
	Size++;
}


void List::push_back(Data data)
{
	if (Head == nullptr) 
		Head = new Node(data);
	else {
		Node* Current = this->Head;

		while (Current->pNext != nullptr) 
		{
			Current = Current->pNext;
		}
		Current->pNext = new Node(data);
	}
	Size++;
}

void List::insert(Data data, int index)
{
	if (index == 0) 
		push_front(data);	
	else {
		Node* Previous = this->Head;

		for (int i = 0; i < index - 1; i++) 
			Previous = Previous->pNext;
		
		Node* node = new Node(data, Previous->pNext);
		Previous->pNext = node;

		Size++;
	}
}

void List::pop_front()
{
	Node* temp = Head;

	Head = Head->pNext;

	delete temp;
	Size--;
}

void List::pop_back()
{
	removeAt(Size - 1);
}

void List::removeAt(int index)
{
	if (index == 0) 
		pop_front();
	else {
		Node* previous = this->Head;

		for (int i = 0; i < index - 1; i++) 
			previous = previous->pNext;
		
		Node* toDel = previous->pNext;
		previous->pNext = toDel->pNext;

		delete toDel;
		Size--;
	}
}

void List::clear()
{
	while (Size) 
		pop_front();
}

void List::Sort()
{
	Node* temp = new Node;

	for (int i = 0; i < Size; i++) {
		Node* Current = this->Head;
		Node* Next = Current->pNext;

		if (Next == nullptr)
			break;
		
		for (int j = 0; j < Size; j++) 
		{

			if (Current->data.name > Next->data.name) {

				Node* temp = new Node;

				if (j == 0)
				{
					temp = Next;
					Current->pNext = Next->pNext;
					Next->pNext = Current;
		
					this->Head = Next;

					temp = Next;
					Next = Current;
					Current = temp;

				}
				else {

					temp = Next;
					Current->pNext = Next->pNext;
					Next->pNext = Current;

					temp = Next;
					Next = Current;
					Current = temp;

					Node* Previous = this->Head;

					for (int t = 0; t < j-1; t++) {

						Previous = Previous->pNext;

					}

					Previous->pNext = Current;

				}


			}

			Current = Current->pNext;
			Next = Next->pNext;

			if (Next == nullptr || Current == nullptr) {

				break;

			}

		}
	}
}

void List::Category(int choice)
{

	if (choice == 1) {

		system("cls");
		cout << "Критерий по цене.\n\n";

		cout << "1.До 100 грн.\n";
		cout << "2.100-1000 грн.\n";
		cout << "3.>1000 грн\n";

		cout << "Ваш выбор >> ";
		cin >> choice;


		cout << endl << endl;

		CPrice(choice);

	}
	else {

		system("cls");
		cout << "Критерий по типу.\n\n";

		cout << "1.К - Канцтовары.\n";
		cout << "2.О - Оргтехника.\n";

		cout << "Ваш выбор >> ";
		cin >> choice;

		cout << endl << endl;

		CType(choice);

	}

}

void List::CPrice(int choice)
{

	Node* Current = this->Head;

	system("cls");

	if (choice == 1) {

		cout << "Критерий по цене.\n";
		cout << "До 100 грн.\n\n";

	}
	else if (choice == 2) {

		cout << "Критерий по цене.\n";
		cout << "100-1000 грн.\n\n";

	}
	else if (choice == 3) {

		cout << "Критерий по цене.\n";
		cout << ">1000 грн\n\n";

	}

	for (int i = 0; i < Size; i++) {
		
		if (choice == 1 && Current->data.price < 100) {

			ShowForIndex(i);

		}
		else if (choice == 2 && Current->data.price >= 100 && Current->data.price <= 1000) {

			ShowForIndex(i);

		}
		else if(choice == 3 && Current->data.price > 1000){

			ShowForIndex(i);

		}

		Current = Current->pNext;

	}
}

void List::CType(int choice)
{
	Node* Current = this->Head;

	system("cls");
	if (choice == 1) {
		cout << "Критерий по типу.\n\n";
		cout << "К - Канцтовары.\n\n";
	}
	else if (choice == 2) {
		cout << "Критерий по типу.\n\n";
		cout << "О - Оргтехника.\n\n";
	}

	for (int i = 0; i < Size; i++) {

		if (choice == 1 && Current->data.type == "К") 
			ShowForIndex(i);	
		else if (choice == 2 && Current->data.type == "О")
			ShowForIndex(i);
		
		Current = Current->pNext;
	}

}

void List::Show()
{

	Node* Current = this->Head;
	
	cout << "Список.\n";

	for (int i = 0; i < GetSize(); i++) {

		cout << "List [" << i << "] = " << Current->data.name << " " << Current->data.type << " " << Current->data.price << " " << Current->data.min << endl;

		Current = Current->pNext;

	}

}

void List::ShowForIndex(int index)
{

	Node* Current = this->Head;

	for (int i = 0; i < GetSize(); i++) {

		if (i == index) {

			cout << "List [" << i << "] = " << Current->data.name << " " << Current->data.type << " " << Current->data.price << " " << Current->data.min << endl;

		}

		Current = Current->pNext;

	}

}

void List::AddToFile()
{
	Data data;

	FILE* File;
	fopen_s(&File, "Lab8.txt", "w");

	fprintf(File, "-------------------------------------------------------------------------------\n");
	fprintf(File, "|                                 Прайс-лист                                  |\n");
	fprintf(File, "-------------------------------------------------------------------------------\n");
	fprintf(File, "|Наименование товара|Тип товара|Цена за 1 шт(грн)|Минимальное кол-во в партии |\n");
	fprintf(File, "-------------------------------------------------------------------------------\n");

	for (int i = 0; i < Size; i++) {

		GetObj(data, i);

		fprintf(File, " %-19s %-10s %-17d %-28d\n", data.name.c_str(), data.type.c_str(), data.price, data.min);

	}

	fprintf(File, "-------------------------------------------------------------------------------\n");
	fprintf(File, "|Примечание: К - канцтовары, О - оргтехника                                   |\n");
	fprintf(File, "-------------------------------------------------------------------------------");

	fclose(File);

}

void List::TakeOfFile()
{
	system("cls");

	Data data;
	int Counter = 0; 

	ifstream File;
	File.open("Lab8.txt");

	clear();
	if (File.is_open()) {
		while (!File.eof()) {

			if (Counter > 4) {
				data.name = "";

				File >> data.name;
				File >> data.type;
				File >> data.price;
				File >> data.min;
				
				if (data.name[0] == '-')
					break;

				push_back(data);

			}else{ getline(File, data.name); }

			Counter++;

		}
	}

	File.close();
}

void List::SetObj(Data data, int index)
{

	Node* Current = this->Head;

	for (int i = 0; i < GetSize(); i++) {

		if (i == index) {

			Current->data.name = data.name;
			Current->data.type = data.type;
			Current->data.price = data.price;
			Current->data.min = data.min;

		}

		Current = Current->pNext;

	}

}

void List::GetObj(Data& data, int index)
{

	Node* Current = this->Head;

	for (int i = 0; i < GetSize(); i++) {

		if (i == index) {

			data.name = Current->data.name;
			data.type = Current->data.type;
			data.price = Current->data.price;
			data.min = Current->data.min;

		}

		Current = Current->pNext;

	}
}