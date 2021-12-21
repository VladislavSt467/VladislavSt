#include <iostream>
#include <iomanip>

using namespace std;

#define SIZE 3

class Apartment          //класс с заданными полями(по заданию)
{
public:
	int numberApartment; //номер квартиры
	int numberEntrance;  //номер подъезда
	double totalArea;    //общая площадь
	bool isPhone;        //наличие телефона
	string SNL;          //ФИО владельцев

	Apartment();
};

Apartment::Apartment()   //конструктор без параметров
{
	this->numberApartment = 0;
	this->numberEntrance = 0;
	this->totalArea = 0;
	this->isPhone = false;
	this->SNL = "";
}

//функция создания массива из 5 объектов заданного класса
void setall(Apartment& aps,const int& numberApartment, const int& numberEntrance, const double& totalArea, const bool& isPhone, const string& SNL) {
	aps.numberApartment = numberApartment;
	aps.numberEntrance = numberEntrance;
	aps.totalArea = totalArea;
	aps.isPhone = isPhone;
	aps.SNL = SNL;
}

//вывод записей в виде таблицы


void show(Apartment aps[]) {

	cout << "| Номер квартиры    | номер подьезда    | Общая площадь      | Наличие телефона    | ФИО                |" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "|" << left << setw(19) << aps[i].numberApartment
			 << "|" << left << setw(19) << aps[i].numberEntrance
			 << "|" << left << setw(20) << aps[i].totalArea
			 << "|" << left << setw(21) << aps[i].isPhone
			 << "|" << left << setw(20) << aps[i].SNL <<"|"<< endl;
	}
}
//сортировка
void sort(Apartment pl[]) {
	Apartment temp;
	
	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (pl[i].numberApartment > pl[j].numberApartment) {
				temp = pl[j];
				pl[j] = pl[i];
				pl[i] = temp;
			}
		}
	}
}

int menu() { 
	//создание таблицы по исходным данным
	cout << "1. Заполнить таблицу " << endl;
	cout << "2. Сортировать базу " << endl;
	cout << "3. Вывод таблицы " << endl;
	cout << "4. Выход" << endl;

	cout << endl;
	cout << "Выберете цифру : ";
	
	int temp;
	cin >> temp;
	return temp;

}
//главное меню программы
int main() {
	setlocale(LC_ALL,"ru");

	int target_point;
	bool target_table = false;
	Apartment aps[SIZE];

	while (true) {
		
		target_point = menu();
		
		if (target_point == 4)
			break;
		//заполнение таблицы
		switch (target_point) {

		case 1: {
			setall(aps[0], 32, 2, 75, true, "Chernysh Maks");
			setall(aps[1], 15, 3, 105, true, "Palchikov Andrey");
			setall(aps[2], 78, 4, 32, true, "Kukushkin Dima");

			target_table = true;
			cout << "Таблица заполнена " << endl;
			system("pause");
			system("cls");
			
			break;
		}
			  //второй вариант исхода таблицы
		case 2: {
			if (target_table == false) {
				cout << "Таблица пуста" << endl;
			}
			else {
				cout << "Таблица до сортировки : " << endl;
				show(aps);

				cout << endl;

				sort(aps);

				cout << "Таблица после сортировки : " << endl;
				show(aps);
			}
			//перезапуск программы
			system("pause");
			system("cls");
			break;
		}

		case 3: {
			if (target_table == false) {
				cout << "Таблица пуста" << endl;
			}
			else show(aps);

			system("pause");
			system("cls");
			break;
		}

		default: {
			cout << "Введите другое значение" << endl;
			break;
		}

		}
	}

	return 0;
}