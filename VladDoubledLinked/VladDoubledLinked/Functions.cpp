#include "Functions.h"

List::List()
{

	Size = 0;
	Head = nullptr;
	Tail = nullptr;	
}

List::~List()
{

	clear();

}

void List::push_front(Data data)
{

	if (Head == nullptr) {

		Head = new Node(data);
		Tail = Head;
	}
	else {

		Node* Current = this->Head;

		Head = new Node(data, Head);
		
		Current->pPrevious = Head;
		

	}

	Size++;

}


void List::push_back(Data data)
{

	if (Head == nullptr) {

		Head = new Node(data);
		Tail = Head;

	}
	else {

		Node* Current = this->Tail;
		
		Tail = new Node(data, nullptr, Tail);

		Current->pNext = Tail;

	}

	Size++;

}

void List::Insert(Data data, int index)
{

	if (index == 0) {

		push_front(data);

	}
	else if (index == Size) {

		push_back(data);

	}
	else {

		if (index < Size / 2) {

			Node* Current = this->Head;

			for (int i = 0; i < index; i++) {

				Current = Current->pNext;

			}

			Node* Previous = Current->pPrevious;
			Node* Add = new Node(data, Current, Previous);

			Previous->pNext = Add;
			Current->pPrevious = Add;


			Size++;
		}
		else {

			Node* Current = this->Tail;

			for (int i = Size - 1; i > index; i--) {

				Current = Current->pPrevious;

			}

			Node* Previous = Current->pPrevious;
			Node* Add = new Node(data, Current, Previous);

			Previous->pNext = Add;
			Current->pPrevious = Add;

			Size++;

		}

	}



}

void List::pop_front()
{

	Node* Current = this->Head;

	Head = Current->pNext;

	delete Current;

	Size--;

}

void List::pop_back()
{

	Node* Current = this->Tail;

	Tail = Current->pPrevious;

	delete Current;

	Size--;

}

void List::RemoveAt(int index)
{

	if (index == 0) {

		pop_front();

	}
	else if (index == (Size - 1)) {

		pop_back();

	}
	else {

		if (index <= (Size / 2)) {

			Node* Previous = this->Head;

			for (int i = 0; i < index - 1; i++) {

				Previous = Previous->pNext;

			}

			Node* ToDel = Previous->pNext;
			Node* Next = ToDel->pNext;

			Previous->pNext = Next;
			Next->pPrevious = Previous;

			delete ToDel;

			Size--;

		}
		else {

			Node* Previous = this->Tail;

			for (int i = 0; i < Size - index - 2; i++) {

				Previous = Previous->pPrevious;

			}

			Node* ToDel = Previous->pPrevious;
			Node* Next = ToDel->pPrevious;

			Next->pNext = Previous;
			Previous->pPrevious = Next;

			delete ToDel;

			Size--;

		}

	}

}

void List::clear()
{

		while (Size) {

			pop_front();

		}

}

void List::Show_front()
{

	Node* Current = this->Head;

	cout << "Список.\n";
	if (Size == 0) {

		cout << "EMPTY\n";

	}
	else {
	
		for (int i = 0; i < Size; i++) {

			cout << "List [" << i << "] = " << Current->data.name << " " << Current->data.type << " " << Current->data.price << " " << Current->data.min << endl;

			Current = Current->pNext;

		}

	}
}


void List::Show_back()
{

	Node* Current = this->Tail;

	cout << "Список.\n";
	if (Size == 0) {

		cout << "EMPTY\n";

	}
	else {
		
		for (int i = 0; i < Size; i++) {

			cout << "List [" << Size - i - 1 << "] = " << Current->data.name << " " << Current->data.type << " " << Current->data.price << " " << Current->data.min << endl;

			Current = Current->pPrevious;

		}

	}
}

void List::ShowForIndex(int index)
{
	if (index <= (Size / 2)) {

		Node* Current = this->Head;

		for (int i = 0; i < Size; i++) {

			if (i == index) {

				cout << "List [" << i << "] = " << Current->data.name << " " << Current->data.type << " " << Current->data.price << " " << Current->data.min << endl;

			}

			Current = Current->pNext;

		}

	}
	else {

		Node* Current = this->Tail;

		for (int i = Size-1; i > 0; i--) {

			if (i == index) {
				
				cout << "List [" << i << "] = " << Current->data.name << " " << Current->data.type << " " << Current->data.price << " " << Current->data.min << endl;

			}

			Current = Current->pPrevious;

		}

	}
}

void List::Category(int choice, int pStart)
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

		if (pStart == 4) {

			CPrice_front(choice);

		}
		else {

			CPrice_back(choice);

		}

	}
	else {

		system("cls");
		cout << "Критерий по типу.\n\n";

		cout << "1.К - Канцтовары.\n";
		cout << "2.О - Оргтехника.\n";

		cout << "Ваш выбор >> ";
		cin >> choice;

		cout << endl << endl;

		if (pStart == 4) {

			CType_front(choice);

		}
		else {

			CType_back(choice);

		}

	}

}

void List::CPrice_front(int choice)
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
		else if (choice == 3 && Current->data.price > 1000) {

			ShowForIndex(i);

		}

		Current = Current->pNext;

	}

}

void List::CPrice_back(int choice)
{

	Node* Current = this->Tail;

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

	for (int i = Size-1; i >= 0; i--) {

		if (choice == 1 && Current->data.price < 100) {

			ShowForIndex(i);

		}
		else if (choice == 2 && Current->data.price >= 100 && Current->data.price <= 1000) {

			ShowForIndex(i);

		}
		else if (choice == 3 && Current->data.price > 1000) {

			ShowForIndex(i);

		}

		Current = Current->pPrevious;

	}

}

void List::CType_front(int choice)
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

void List::CType_back(int choice)
{

	Node* Current = this->Tail;

	system("cls");

	if (choice == 1) {
		cout << "Критерий по типу.\n\n";
		cout << "К - Канцтовары.\n\n";
	}
	else if (choice == 2) {
		cout << "Критерий по типу.\n\n";
		cout << "О - Оргтехника.\n\n";
	}

	for (int i = Size - 1; i >= 0; i--) {

		if (choice == 1 && Current->data.type == "К")
			ShowForIndex(i);
		else if (choice == 2 && Current->data.type == "О")
			ShowForIndex(i);

		Current = Current->pPrevious;

	}

}

void List::Sort()
{

	for (int i = 0; i < Size; i++) {

		Node* Current = this->Head;
		Node* Next = Current->pNext;

		if (Next == nullptr) {

			break;

		}

		for (int j = 0; j < Size; j++) {

			if (Current->data.name > Next->data.name) {

				Node* temp = new Node;

				if (j == 0)
				{

					Node* NextNext = Next->pNext;

					temp = Next;
					Current->pNext = Next->pNext;
					Next->pNext = Current;
					Next->pPrevious = nullptr;
					NextNext->pPrevious = Current;
					Current->pPrevious = Next;

					this->Head = Next;

					temp = Next;
					Next = Current;
					Current = temp;

				}
				else if (j == Size - 2) {

					Node* Prev = Current->pPrevious;

					temp = Next;
					
					Current->pNext = nullptr;
					Next->pPrevious = Current->pPrevious;
					Current->pPrevious = Next;
					Next->pNext = Current;
					Prev->pNext = Next;

					this->Tail = Current;

					temp = Next;
					Next = Current;
					Current = temp;

				}
				else {

					Node* Prev = Current->pPrevious;
					Node* NextNext = Next->pNext;

					temp = Next;

					Current->pNext = NextNext;
					NextNext->pPrevious = Current;
					Current->pPrevious = Next;
					Next->pNext = Current;
					Next->pPrevious = Prev;
					Prev->pNext = Next;

					temp = Next;
					Next = Current;
					Current = temp;

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

			}
			else { getline(File, data.name); }

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
