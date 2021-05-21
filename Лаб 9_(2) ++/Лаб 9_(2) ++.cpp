#include "Header.h"

int main() {
	setlocale(LC_ALL, "Ru");
	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

	Data data;
	int numb = 0, size;

	List lst;

	srand(time(NULL));


	while (true) {

		printf("1. �������� ������.                                                                                 ������ ������ = %d\n", lst.GetSize());
		printf("2. ������ ������ � ������.\n");
		printf("3. ������ ������ � �����.\n");
		printf("4. ����� �� �������� � ������ ������.\n");
		printf("5. ����� �� �������� � ����� ������.\n");
		printf("6. ���������� �������� (� ����� �������� �����).\n");
		printf("7. �������� ������ ��������.\n");
		printf("8. ����������.\n");
		printf("9. ������ ������ ������ � ����.\n");
		printf("10. �������� ������ �� �����.\n");
		printf("11. ����� �� ���������.\n\n");

		cout << "������� ����� >> ";
		cin >> numb;

		switch (numb) {
		case 1: {

			string ask = "��";

			while (true) {

				if (ask == "��" || ask == "��" || ask == "��" || ask == "��") {

					system("cls");

					cout << "������� ����(��������, ���(�, �), ����, ����������� ���-��.) >> ";

					cin >> data.name;
					cin >> data.type;
					cin >> data.price;
					cin >> data.min;

					lst.push_back(data);

					system("cls");

					cout << "������ �� �� ����������?\n";
					cout << "��� ����� >> ";
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

			lst.Show_front();

			system("pause");
			system("cls");

			break;

		}
		case 3: {

			system("cls");

			lst.Show_back();

			system("pause");
			system("cls");

			break;
		}
		case 4: {

			system("cls");

			cout << "����� ��������.\n\n";
			cout << "1. �� ����.\n";
			cout << "2. �� ����.\n";
			cout << "��� ����� >> ";
			cin >> numb;

			lst.Category(numb, 4);

			cout << endl;

			system("pause");
			system("cls");

			break;

		}
		case 5: {

			system("cls");

			cout << "����� ��������.\n\n";
			cout << "1. �� ����.\n";
			cout << "2. �� ����.\n";
			cout << "��� ����� >> ";
			cin >> numb;

			lst.Category(numb, 5);

			cout << endl;

			system("pause");
			system("cls");

			break;

		}
		case 6: {

			system("cls");



			cout << "������� ����(��������, ���(�, �), ����, ����������� ���-��.) >> ";

			cin >> data.name;
			cin >> data.type;
			cin >> data.price;
			cin >> data.min;

			cout << endl << endl;

			lst.Show_front();

			cout << endl << endl;

			cout << "������� ������ >> ";
			cin >> numb;

			while (numb < 0 || numb > lst.GetSize()) {

				cout << "�� ����� �� ������������ ������.\n";

				system("pause");
				system("cls");

				cout << endl << endl;

				lst.Show_front();

				cout << endl << endl;

				cout << "������� ������ >> ";
				cin >> numb;

			}

			lst.Insert(data, numb);

			system("pause");
			system("cls");

			break;

		}
		case 7: {
			system("cls");
			lst.Show_front();

			cout << endl << endl;

			cout << "������� ������ >> ";
			cin >> numb;

			while (numb < 0 || numb >(lst.GetSize() - 1)) {

				cout << "�� ����� �� ������������ ������.\n";

				system("pause");
				system("cls");

				cout << endl << endl;

				lst.Show_front();

				cout << endl << endl;

				cout << "������� ������ >> ";
				cin >> numb;

			}

			lst.RemoveAt(numb);

			system("pause");
			system("cls");

			break;
		}
		case 8: {

			lst.Sort();


			system("pause");
			system("cls");

			break;

		}
		case 9: {

			lst.AddToFile();

			system("pause");
			system("cls");

			break;
		}
		case 10: {

			lst.TakeOfFile();

			system("pause");
			system("cls");

			break;
		}
		case 11: {

			system("pause");

			return 0;
		}
		}


	}
}
