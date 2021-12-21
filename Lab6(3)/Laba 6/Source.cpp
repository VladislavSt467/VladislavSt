#include <iostream>
#include <iomanip>

using namespace std;

#define SIZE 3

class Apartment          //����� � ��������� ������(�� �������)
{
public:
	int numberApartment; //����� ��������
	int numberEntrance;  //����� ��������
	double totalArea;    //����� �������
	bool isPhone;        //������� ��������
	string SNL;          //��� ����������

	Apartment();
};

Apartment::Apartment()   //����������� ��� ����������
{
	this->numberApartment = 0;
	this->numberEntrance = 0;
	this->totalArea = 0;
	this->isPhone = false;
	this->SNL = "";
}

//������� �������� ������� �� 5 �������� ��������� ������
void setall(Apartment& aps,const int& numberApartment, const int& numberEntrance, const double& totalArea, const bool& isPhone, const string& SNL) {
	aps.numberApartment = numberApartment;
	aps.numberEntrance = numberEntrance;
	aps.totalArea = totalArea;
	aps.isPhone = isPhone;
	aps.SNL = SNL;
}

//����� ������� � ���� �������


void show(Apartment aps[]) {

	cout << "| ����� ��������    | ����� ��������    | ����� �������      | ������� ��������    | ���                |" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "|" << left << setw(19) << aps[i].numberApartment
			 << "|" << left << setw(19) << aps[i].numberEntrance
			 << "|" << left << setw(20) << aps[i].totalArea
			 << "|" << left << setw(21) << aps[i].isPhone
			 << "|" << left << setw(20) << aps[i].SNL <<"|"<< endl;
	}
}
//����������
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
	//�������� ������� �� �������� ������
	cout << "1. ��������� ������� " << endl;
	cout << "2. ����������� ���� " << endl;
	cout << "3. ����� ������� " << endl;
	cout << "4. �����" << endl;

	cout << endl;
	cout << "�������� ����� : ";
	
	int temp;
	cin >> temp;
	return temp;

}
//������� ���� ���������
int main() {
	setlocale(LC_ALL,"ru");

	int target_point;
	bool target_table = false;
	Apartment aps[SIZE];

	while (true) {
		
		target_point = menu();
		
		if (target_point == 4)
			break;
		//���������� �������
		switch (target_point) {

		case 1: {
			setall(aps[0], 32, 2, 75, true, "Chernysh Maks");
			setall(aps[1], 15, 3, 105, true, "Palchikov Andrey");
			setall(aps[2], 78, 4, 32, true, "Kukushkin Dima");

			target_table = true;
			cout << "������� ��������� " << endl;
			system("pause");
			system("cls");
			
			break;
		}
			  //������ ������� ������ �������
		case 2: {
			if (target_table == false) {
				cout << "������� �����" << endl;
			}
			else {
				cout << "������� �� ���������� : " << endl;
				show(aps);

				cout << endl;

				sort(aps);

				cout << "������� ����� ���������� : " << endl;
				show(aps);
			}
			//���������� ���������
			system("pause");
			system("cls");
			break;
		}

		case 3: {
			if (target_table == false) {
				cout << "������� �����" << endl;
			}
			else show(aps);

			system("pause");
			system("cls");
			break;
		}

		default: {
			cout << "������� ������ ��������" << endl;
			break;
		}

		}
	}

	return 0;
}