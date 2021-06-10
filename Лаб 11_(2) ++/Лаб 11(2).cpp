#include "Function.h"



int main()
{
    setlocale(LC_ALL, "ru");
    Product_description Tovar("Папка", "К", 5, 4);
    cout << "\nИнициализация объекта через конструктор:\n";
    Tovar.ShowAll();
    cout << endl << endl;

  
    string somename = Tovar.GetName();
    string sometype = Tovar.Gettype();
    int someprice = Tovar.Getprice();
    int somemin = Tovar.Getmin();

    cout << "\n\tГеттеры:\n";
    cout << somename << endl;
    cout << sometype << endl;
    cout << someprice << endl;
    cout << somemin << endl;


   
    cout << "\tСеттеры:\n";
    Tovar.SetName("name");
    Tovar.Settype("type");
    Tovar.Setprice(111);
    Tovar.Setmin(222);
    Tovar.ShowAll();

    cout << endl << endl;
    Tovar.ShowName();
    cout << endl;
    Tovar.Showtype(); 
    cout << endl;
    Tovar.Showprice();
    cout << endl;
    Tovar.Showmin();
    cout << endl;

}
