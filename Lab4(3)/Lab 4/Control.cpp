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
		cout << "не создана таблица, вернитесь в 1 пункт" << endl;
		return;
	}

	if (this->sorted) {
		cout << "“аблица б≥ла до Їтого отсоритирована" << endl;
		return;
	}

	sort(rows.begin(), rows.end(), [](ConfigOS* a, ConfigOS* b) {return a->GetOSName() < b->GetOSName(); });

	this->sorted = true;

	cout << "сортировка таблици завершена" << endl;
}

void Control::add_end(ConfigOS* add_element) {

	if (this == nullptr) {
		cout << "не создана таблица, вернитесь в 1 пункт" << endl;
		return;
	}

	rows.push_back(add_element);

	this->sorted = false;
	ConfigOS::count_1++;
}

void Control::delete_end() {

	if (this == nullptr) {
		cout << "не создана таблица, вернитесь в 1 пункт" << endl;
		return;
	}

	if (this->rows.size() == 0) {
		cout << "“аблица пуста" << endl;
		return;
	}

	rows.pop_back();

	ConfigOS::count_1--;
	cout << "удаление завершено" << endl;
}

ostream& operator<<(ostream& out, Control* target) {
	

	if (target == nullptr) {
		cout << "не создана таблица, вернитесь в 1 пункт" << endl;
		return out;
	}

	out << endl << target->name << endl;
	//out << "—оздано елементов таблици : " << target->count << endl;

	if (target->sorted)
		out << "“аблица отсортирована"<<endl;
	else
		out << "“аблица не сортирована"<<endl;

	if (target->rows.size() == 0) {
		out << "“аблица пуста" << endl;
		return out;
	}
	else out << "¬ талице " << target->rows.size() << " елементов" << endl;

	for (auto rows : target->rows)
		cout << rows;

	cout << endl;
	return out;
}