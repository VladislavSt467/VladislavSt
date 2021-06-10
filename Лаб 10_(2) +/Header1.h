#pragma once
#include <iostream>

using namespace std;

#define DEBUG

class SUM
{
private:
    int s;
public:
    int x;
    int y;

    SUM(int valueX = 0, int valueY = 0) 
    {
        x = valueX;
        y = valueY;

        s = 0;
    }

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

    void Print()
    {
        cout << "\nx = " << x << endl;
        cout << "\ny = " << y << endl;
    }

    void countS()
    {
        s = x + y;
        cout << "\nОтвет = " << s << endl;
    }
};

