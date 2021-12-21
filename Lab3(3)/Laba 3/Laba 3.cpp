#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class B1 {
    int a;
public:
    B1(int x) { a = x; }
    virtual void show_B1() { cout << "B1 = " << a << endl; }
};

class B2 {
    int g;
public:
    B2(int x) { g = x; }
    virtual void show_B2() { cout << "B2 = " << g << endl; }
};

class D1 : public B1 , protected B2 {
    int c;
public:
    D1(int x, int y, int z) : B2(y), B1(z) { c = x; }
    virtual void show_D1() { cout << "D1 = " << c << endl; show_B2(); show_B1(); }
};
 
class D2 : protected D1 {
    int d;
public:
    D2(int x, int y, int z, int i) : D1(y, z, i) { d = x; }
    virtual void show_D2() { cout << "D2 = " << d << endl; show_D1(); }
};

class D3 : private D2 {
    int e;
public:
    D3(int x, int y, int z, int i, int j) : D2(y, z, i, j) { e = x; }
    virtual void show_D3() { cout << "D3 = " << e << endl; show_D2(); }
};

class D4 : public D2 {
    int f;
public:
    D4(int x, int y, int z, int i, int j) : D2(y, z, i, j) { f = x; }
    virtual void show_D4() { cout << "D4 = " << f << endl; show_D2(); }
};

int main()
{
    setlocale(LC_ALL, "RU");
    D3 temp(100, 200, 300, 400, 500);
    D4 temp1(1, 2, 3, 4, 5);
    cout << "D3 temp(100,200,300,400,500);\n";
    cout << "D4 temp1(1,2,3,4,5);\n";
    cout << "\nСледуя иерархии класса D3: \n";
    temp.show_D3();
    cout << "\nСледуя иерархии класса D4\n";
    temp1.show_D4();

    return 0;
    
}
