#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class T>
class MyClass {
	T a;
	T b;
	T sum;
public:
	MyClass();
	MyClass(T, T);
	T get_sum();
};

template <class T>

void operator ==(vector<MyClass<T>*>& a, vector<MyClass<T>*>& b) {

	int temp = min(a.size(), b.size());
	
	for (int i = 0; i < temp; i++)
		if (a[i]->get_sum() == b[i]->get_sum())
			cout << a[i]->get_sum() << " == " << b[i]->get_sum() << endl;
		else if (a[i]->get_sum() > b[i]->get_sum())
			cout << a[i]->get_sum() << " > " << b[i]->get_sum() << endl;
		else
			cout << a[i]->get_sum() << " < " << b[i]->get_sum() << endl;
}

template <class T>
MyClass<T>::MyClass() {
	this->a = 1;
	this->b = 2;
	this->sum = this->a + this->b;
}

template <class T>
MyClass<T>::MyClass(T a, T b) {
	this->a = a;
	this->b = b;
	this->sum = this->a + this->b;
}
;
template <class T>

T MyClass<T>::get_sum() {
	return this->sum;
}

int main()
{
	setlocale(LC_ALL, "RU");
	
	vector<MyClass<int>*> a;
	a.push_back(new MyClass<int>(1, 2));
	a.push_back(new MyClass<int>(3, 4));
	a.push_back(new MyClass<int>(7, 9));
	a.push_back(new MyClass<int>(9, 9));

	vector<MyClass<int>*> b;
	b.push_back(new MyClass<int>(1, 1));
	b.push_back(new MyClass<int>(6, 1));
	b.push_back(new MyClass<int>(9, 9));

	cout << "Вывод вектора А : " << endl;
	for (auto A : a)
		cout << A->get_sum() << " " << endl;

	cout << endl;

	cout << "Вывод вектора В : " << endl;
	for (auto B : b)
		cout << B->get_sum() << " " << endl;
	cout << endl;

	a == b;  
}

