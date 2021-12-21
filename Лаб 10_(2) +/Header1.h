#pragma once
#include <iostream>

using namespace std;

//#define DEBUG

class SUM
{
private:
    int s;
public:
    int x;
    int y;
    //конструктор с параметрами по умолчанию
    SUM(int valueX = 0, int valueY = 0) 
    {
        x = valueX;
        y = valueY;

        s = 0;
    }
    //функция инициализации x, y
    void SetX(int valueX)
    {
        x = valueX;
    }
  
    void SetY(int valueY)
    {
        y = valueY;
    }
    
    int GetS()
    {
        return s;
    }
    //функция вывода всех переменных класса
    void Print()
    {
        cout << "\nx = " << x << endl;
        cout << "\ny = " << y << endl;
    }
    //функция подсчета суммы s и вывода результата на экран
    void countS()
    {
        s = x + y;
        cout << "\nОтвет = " << s << endl;
    }
};

