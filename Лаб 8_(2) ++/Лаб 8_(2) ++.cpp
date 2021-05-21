#include "Header.h"

int main() 
{
	setlocale(LC_ALL, "Rus");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	Data data;

	int numb = 0;

	List lst;

	srand(time(NULL));

	while (true)
	{


		printf("1. Создание списка.                                                                                 Размер списка = %d\n", lst.GetSize());
		printf("2. Печать списка.\n");
		printf("3. Поиск по критерию(осуществить выбор критерия).\n");
		printf("4. Добавление элемента(в любое заданное место).\n");
		printf("5. Удаление любого элемента.\n");
		printf("6. Сортировка.\n");
		printf("7. Запись нового списка в файл.\n");
		printf("8. Создание списка из файла.\n");
		printf("9. Выход из программы.\n\n");

		cout << "Введите число >> ";
		cin >> numb;

		switch (numb) {
		case 1: {

			string ask = "Да";

			while (true) {

				if (ask == "Да" || ask == "дА" || ask == "ДА" || ask == "да") {

					system("cls");

					cout << "Введите инфу(Название, тип(К, О), цена, минимальное кол-во.) >> ";

					cin >> data.name;
					cin >> data.type;
					cin >> data.price;
					cin >> data.min;

					lst.push_back(data);

					system("cls");

					cout << "Хотите ли вы продолжить?\n";
					cout << "Ваш ответ >> ";
					cin >> ask;
					cout << endl;

				}
				else {

					system("pause");
					system("cls");

					break;

				}


			}

			break;

		}
		case 2: {

			system("cls");

			lst.Show();

			system("pause");
			system("cls");

			break;

		}
		case 3: {

			system("cls");

			cout << "Выбор критерая.\n\n";
			cout << "1. По цене.\n";
			cout << "2. По типу.\n";
			cout << "Ваш выбор >> ";
			cin >> numb;

			lst.Category(numb);

			cout << endl;

			system("pause");
			system("cls");

			break;
		}
		case 4: {

			system("cls");



			cout << "Введите инфу(Название, тип(К, О), цена, минимальное кол-во.) >> ";

			cin >> data.name;
			cin >> data.type;
			cin >> data.price;
			cin >> data.min;

			cout << endl << endl;

			lst.Show();

			cout << endl << endl;

			cout << "Введите индекс >> ";
			cin >> numb;

			while (numb < 0 || numb > lst.GetSize()) {

				cout << "Вы ввели не сушествующий индекс.\n";

				system("pause");
				system("cls");

				cout << endl << endl;

				lst.Show();

				cout << endl << endl;

				cout << "Введите индекс >> ";
				cin >> numb;

			}

			lst.insert(data, numb);

			system("pause");
			system("cls");

			break;

		}
		case 5: {
			system("cls");
			lst.Show();

			cout << endl << endl;

			cout << "Введите индекс >> ";
			cin >> numb;

			while (numb < 0 || numb >(lst.GetSize() - 1)) {

				cout << "Вы ввели не сушествующий индекс.\n";

				system("pause");
				system("cls");

				cout << endl << endl;

				lst.Show();

				cout << endl << endl;

				cout << "Введите индекс >> ";
				cin >> numb;

			}

			lst.removeAt(numb);

			system("pause");
			system("cls");

			break;
		}
		case 6: {

			lst.Sort();


			system("pause");
			system("cls");

			break;

		}
		case 7: {

			lst.AddToFile();

			system("pause");
			system("cls");

			break;
		}
		case 8: {

			lst.TakeOfFile();

			system("pause");
			system("cls");

			break;
		}
		case 9: {

			system("pause");

			return 0;
		}
		}


	}
	return 0;
}
