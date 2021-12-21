#include <iostream>

using namespace std;

template<class T>
class SUM {
    T a;
    T b;
public:
    SUM();
    SUM(T, T);
    void show();
    SUM<T>& operator + (SUM<T>&);
    SUM<T>& operator = (SUM<T>&);
};

template<class T>
SUM<T>::SUM() {
    this->a = 1;
    this->b = 1;
}

template<class T>
SUM<T>::SUM(T a, T b) {
    this->a = a;
    this->b = b;
}
/// <summary>
///  </template<class T>>
/// </summary>
/// <typeparam name="T"></typeparam>
template<class T>
void SUM<T>::show() {
    cout << endl << "a = " << this->a << endl;
    cout << "b = " << this->b << endl;
}

template<class T>
SUM<T>& SUM<T>::operator+(SUM<T>& other) {
    SUM<T> result;

    result.a = this->a + other.a;
    result.b = this->b + other.b;

    return result;
}

template<class T>
SUM<T>& SUM<T>::operator=(SUM<T>& other) {
    this->a = other.a;
    this->b = other.b;

    return this;
}

int main()
{
    setlocale(LC_ALL, "RU");
  
    cout << endl << "Работа с типом int : " << endl;
    SUM<int>a;
    a.show();

    cout << endl;

    SUM<int>b(4,5);
    b.show();
   
    cout << endl << "Работа оператора + : " << endl;
    SUM<int> result_1 = a + b;
    result_1.show();


    cout << endl << "Работа с типом double : " << endl;
    SUM<double> A;
    A.show();
    cout << endl;
    /// <summary>
    /// <cout << "Введите значение переменной a" << endl>
    /// </summary>
    /// <returns></returns>
    SUM<double> B(4.34, 5.87);
    B.show();

    cout << endl << "Работа оператора + : " << endl;
    SUM<double> result_2 = A + B;
    result_2.show();


    



}
