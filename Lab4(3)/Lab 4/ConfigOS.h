#pragma once 

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

class ConfigOS {
private:
	string OSName;
	string SUBD;
	int MinHardWave, MinOP;
	double price;

public:
	static int count_1;

    ConfigOS();
    ConfigOS(string OSName, string SUBD, int MinHardWave, int MinOP, double price);

	void SetAll(string OSName, string SUBD, int MinHardWave, int MinOP, double price);

    void SetOSName(string value);
    void SetSUBD(string value);
    void SetMinHardWave(int value);
    void SetMinOP(int value);
    void SetPrice(double value);


	string GetOSName();

	string GetSUBD();

	int GetMinHardWave();

	int GetMinOP();

	double Getprice();

    void showall();

	friend ostream& operator<< (ostream& out, const ConfigOS* point);

    friend istream& operator>> (istream& stream, ConfigOS& point);
};