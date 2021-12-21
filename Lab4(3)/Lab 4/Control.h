#pragma once 

#include <algorithm>
#include "ConfigOS.h"

class Control {

private:
	string name;
	vector<ConfigOS*> rows;
	bool sorted;
public:
	static int count;
	
	Control(string name = "NON");
	~Control();

	void Sort();
	void add_end(ConfigOS* add_element);
	void delete_end();
	friend ostream& operator << (ostream& out, Control* target);
};