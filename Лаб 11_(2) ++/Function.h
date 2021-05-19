#pragma once
#include <iostream>
#include <string>

using namespace std;

class Opers
{
    string Name;
    string SUBD;
    int outmem;
    int minRam;
    int cost;
public:
    Opers(string theName = "None", string theSUBD = "None", int theoutmem = 0, int theminRam = 0, int thecost = 0)
    {
        Name = theName;
        SUBD = theSUBD;
        outmem = theoutmem;
        minRam = theminRam;
        cost = thecost;
    }

    string GetName()
    {
        return Name;
    }
    string GetSUBD()
    {
        return SUBD;
    }
    int Getoutmem()
    {
        return outmem;
    }
    int GetminRam()
    {
        return minRam;
    }
    int Getcost()
    {
        return cost;
    }

    void SetName(string aName)
    {
        Name = aName;
    }
    void SetSUBD(string aSUBD)
    {
        SUBD = aSUBD;
    }
    void Setoutmem(int valueoutmem)
    {
        outmem = valueoutmem;
    }
    void SetminRam(int valueminRam)
    {
        minRam = valueminRam;
    }
    void Setcost(int valuecost)
    {
        cost = valuecost;
    }
    void SetALL(string theName, string theSUBD, int theoutmem, int theminRam, int thecost)
    {
        Name = theName;
        SUBD = theSUBD;
        outmem = theoutmem;
        minRam = theminRam;
        cost = thecost;
    }

    void ShowName()
    {
        cout << Name;

    }
    void ShowSUBD()
    {
        cout << SUBD;
    }
    void Showoutmem()
    {
        cout << outmem;
    }
    void ShowminRam()
    {
        cout << minRam;
    }
    void Showcost()
    {
        cout << cost;
    }
    void ShowAll()
    {
        cout << Name << endl;
        cout << SUBD << endl;
        cout << outmem << endl;
        cout << minRam << endl;
        cout << cost << endl;
    }
};
