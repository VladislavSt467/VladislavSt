
#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include <array>
#include <iomanip>

using namespace std;

class ConfigOS {
private:
	string OSName;
	string SUBD;
	int MinHardWave, MinOP;
	double price;

public:

	ConfigOS() : OSName(""), SUBD(""), MinHardWave(0), MinOP(0), price(0) {

	}

	void Set(string OSName, string SUBD, int MinHardWave, int MinOP, double price) {

		this->OSName = OSName;
		this->SUBD = SUBD;
		this->MinHardWave = MinHardWave;
		this->MinOP = MinOP;
		this->price = price;

	}

	string GetOSName() {
		return OSName;
	}

	string GetSUBD() {
		return SUBD;
	}

	int GetMinHardWave() {
		return MinHardWave;
	}

	int GetMinOP() {
		return MinOP;
	}

	double Getprice() {
		return price;
	}

	friend ostream& operator<< (ostream& out, const ConfigOS& point) {
		out << "|" << setw(23) << left << point.OSName <<  "|"
			<< setw(18) << left << point.SUBD << "|"
			<< setw(24) << left << point.MinHardWave  << "|"
			<< setw(27) << left << point.MinOP << "|"
			<< setw(20) << left << point.price << "|" << endl;
		return out;
	}

	friend istream& operator>> (istream& stream, ConfigOS& point) {
		cout << "Название, СУБД, Мин.Обьем внешней памяти,Мин.Обьем внутренней памяти, цена :";
		stream >> point.OSName;
		stream >> point.SUBD;
		stream >> point.MinHardWave;
		stream >> point.MinOP;
		stream >> point.price;

		return stream;
	}

	ConfigOS& operator= (ConfigOS& point) {

		OSName = point.OSName;
		SUBD = point.SUBD;
		MinHardWave = point.MinHardWave;
		MinOP = point.MinOP;
		price = point.price;

		return point;

	}

	friend bool operator==(const ConfigOS& h1, const ConfigOS& h2) {
		return (h1.OSName == h2.OSName);
	}

};


int main()
{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));

	struct Rand {
		string OSName;
		string SUBD;
		int MinHardWave, MinOP;
		double price;
	};

	Rand mas[10];
	int Size = 0;
	ConfigOS table[10];
	int temp = 0;
	int yk = 0;
	int tim = 0;

	mas[0] = { "OS/2", "DB2", 130, 22, 3343 };
	mas[1] = { "Windows/NT", "SQLServer", 230, 24, 2685 };
	mas[2] = { "SCO/Unix", "Oracle", 110, 48, 3745 };

	while (Size <= 0 || Size > 10) {
		cout << "Введите количество строк : ";
		cin >> Size;

		system("CLS");
	}

	while (temp != 5) {

		cout << endl << endl;

		cout << "////////////////////////////////////\n";
		cout << "/     1. Заполнить                 /\n";
		cout << "/     2. Сортировка                /\n";
		cout << "/     3. Сравнение                 /\n";
		cout << "/     4. Вывод                     /\n";
		cout << "/     5. Выход                     /\n";
		cout << "////////////////////////////////////\n\n";

		cout << "Введите число : ";
		cin >> temp;

		system("CLS");

		switch (temp) {

		case 1: {
			for (int i = 0; i < Size; i++) {

				int tem = rand() % 3;

				table[i].Set(mas[tem].OSName, mas[tem].SUBD, mas[tem].MinHardWave, mas[tem].MinOP, mas[tem].price);
				cout << table[i];
			}
			cout << "Таблица успешно создана";
			yk++;
			break;
		}

		case 2: {

			if (yk == 0) {
				cout << "Ваша таблица пуста"; break;
			}
			else {
				for (int i = 0; i < Size; i++) {
					for (int j = 0; j < Size - 1; j++) {
						if (table[i].GetOSName() < table[j].GetOSName()) {

							Rand temp;

							temp.OSName = table[i].GetOSName();
							temp.SUBD = table[i].GetSUBD();
							temp.MinHardWave = table[i].GetMinHardWave();
							temp.MinOP = table[i].GetMinOP();
							temp.price = table[i].Getprice();

							table[i] = table[j];

							table[j].Set(temp.OSName, temp.SUBD, temp.MinHardWave, temp.MinOP, temp.price);

						}
					}
				}
				cout << "Таблица отсортерована";
				break;
			}
		}

		case 3: {
			if (yk == 0) {
				cout << "Ваша таблица пуста"; break;
			}
			else {
				for (int i = 0; i < Size; i++) {
					for (int j = 0; j < Size - 1; j++) {
						if (i == j) break; else if (table[i] == table[j]) {
							tim++; break;
						}
					}
				}
				cout << "количество пар одинаковых строк в таблице : " << tim;
				tim = 0;
				break;
			}
		}

		case 4: {
			if (yk == 0) {
				cout << "Ваша таблица пуста"; break;
			}
			else {
				printf("----------------------------------------------------------------------------------------------------------------------\n");
				printf("|Конфигурация програмных средств информационных систем                                                               |\n");
				printf("|--------------------------------------------------------------------------------------------------------------------|\n");
				printf("|Операц. система        |СУБД              |Мин.Обьем внешней памяти|Мин.Обьем внутренней памяти|Приблизительная цена|\n");
				printf("|-----------------------|------------------|------------------------|---------------------------|--------------------|\n");

				for (int i = 0; i < Size; i++) {

					cout << table[i];  //Перегрузка ввода 
				}

				printf("----------------------------------------------------------------------------------------------------------------------\n\n");
				break;
			}
		}

		case 5: {
			cout << "Работа програмы успешно завершена";
			break;
		}

		}

		cout << endl << endl;


		system("pause");
		system("cls");
	}


}

