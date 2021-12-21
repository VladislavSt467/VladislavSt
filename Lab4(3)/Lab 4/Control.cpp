#include "Control.h"

Control::Control(string name) {
	this->name = name;
	this->sorted = false;
	count++;
}

Control::~Control() {
	rows.clear();
}

void Control::Sort() {

	if (this == nullptr) {
		cout << "�� ������� �������, ��������� � 1 �����" << endl;
		return;
	}

	if (this->sorted) {
		cout << "������� ��� �� ����� ��������������" << endl;
		return;
	}

	sort(rows.begin(), rows.end(), [](ConfigOS* a, ConfigOS* b) {return a->GetOSName() < b->GetOSName(); });

	this->sorted = true;

	cout << "���������� ������� ���������" << endl;
}

void Control::add_end(ConfigOS* add_element) {

	if (this == nullptr) {
		cout << "�� ������� �������, ��������� � 1 �����" << endl;
		return;
	}

	rows.push_back(add_element);

	this->sorted = false;
	ConfigOS::count_1++;
}

void Control::delete_end() {

	if (this == nullptr) {
		cout << "�� ������� �������, ��������� � 1 �����" << endl;
		return;
	}

	if (this->rows.size() == 0) {
		cout << "������� �����" << endl;
		return;
	}

	rows.pop_back();

	ConfigOS::count_1--;
	cout << "�������� ���������" << endl;
}

ostream& operator<<(ostream& out, Control* target) {
	

	if (target == nullptr) {
		cout << "�� ������� �������, ��������� � 1 �����" << endl;
		return out;
	}

	out << endl << target->name << endl;
	//out << "������� ��������� ������� : " << target->count << endl;

	if (target->sorted)
		out << "������� �������������"<<endl;
	else
		out << "������� �� �����������"<<endl;

	if (target->rows.size() == 0) {
		out << "������� �����" << endl;
		return out;
	}
	else out << "� ������ " << target->rows.size() << " ���������" << endl;

	for (auto rows : target->rows)
		cout << rows;

	cout << endl;
	return out;
}