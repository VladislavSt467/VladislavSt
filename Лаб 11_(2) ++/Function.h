#pragma once
#include <iostream>
#include <string>

using namespace std;

class Product_description
{
    string Name;
    string type;
    int price;
    int min;
   
public:
    Product_description(string theName = "None", string thetype = "None", int theprice = 0, int themin = 0)
    {
        Name = theName;
        type = thetype;
        price = theprice;
        min = themin;
       
    }

    string GetName()
    {
        return Name;
    }
    string Gettype()
    {
        return type;
    }
    int Getprice()
    {
        return price;
    }
    int Getmin()
    {
        return min;
    }
    
    void SetName(string aName)
    {
        Name = aName;
    }
    void Settype(string atype)
    {
        type = atype;
    }
    void Setprice(int valueprice)
    {
        price = valueprice;
    }
    void Setmin(int valuemin)
    {
        min = valuemin;
    }
    
    void SetALL(string theName, string thetype, int theprice, int themin)
    {
        Name = theName;
        type = thetype;
        price = theprice;
        min = themin;
    }

    void ShowName()
    {
        cout << Name;

    }
    void Showtype()
    {
        cout << type;
    }
    void Showprice()
    {
        cout << price;
    }
    void Showmin()
    {
        cout << min;
    }
    
    void ShowAll()
    {
        cout << Name << endl;
        cout << type << endl;
        cout << price << endl;
        cout << min << endl;
    }
};
