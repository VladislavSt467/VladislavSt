#include <iostream>

using namespace std;

int foo(int a[], int N)
{
	int p = 1;
	if (a[N] % 2 != 0)
		p *= a[N];
	else
		p = 1;

	if (N == 0)
		return p;

	return p * foo(a, N - 1);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	const int N = 5;
	int a[N] = { 4, -5, 9, 1, -3 };

	cout << "Произведение нечетных элементов массива = " << foo(a, N - 1);

	cout << endl;

	return 0;
}
