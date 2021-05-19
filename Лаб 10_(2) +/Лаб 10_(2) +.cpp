#include "Header1.h"



int main()
{
    setlocale(LC_ALL, "ru");
#ifndef DEBUG
    SUM sum1;
    cout << "\nВведите значение x: ";
    cin >> sum1.x;
    cout << endl;
    cout << "\nВведите значение y: ";
    cin >> sum1.y;
    sum1.countS();
    cout << endl;
    sum1.Print();

    

#endif

#ifdef DEBUG

    SUM sum1;
    SUM* r = &sum1;
    cout << "\nВведите значение x: ";
    cin >> r->x;
    cout << endl;
    cout << "\nВведите значение y: ";
    cin >> r->y;
    r->countS();
    cout << endl;
    r->Print();

#endif

}

