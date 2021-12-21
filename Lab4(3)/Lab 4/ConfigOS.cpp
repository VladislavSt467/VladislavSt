#include "ConfigOS.h"

ConfigOS::ConfigOS() : OSName(""), SUBD(""), MinHardWave(0), MinOP(0), price(0)
{

}

ConfigOS::ConfigOS(string OSName, string SUBD, int MinHardWave, int MinOP, double price)
{
	this->OSName = OSName;
	this->SUBD = SUBD;
	this->MinHardWave = MinHardWave;
	this->MinOP = MinOP;
	this->price = price;
}

void ConfigOS::SetAll(string OSName, string SUBD, int MinHardWave, int MinOP, double price) {

	this->OSName = OSName;
	this->SUBD = SUBD;
	this->MinHardWave = MinHardWave;
	this->MinOP = MinOP;
	this->price = price;
}

void ConfigOS::SetOSName(string OSName) 
{

	this->OSName = OSName;
}

void ConfigOS::SetSUBD(string SUBD)
{
	this->SUBD = SUBD;
}

void ConfigOS::SetMinHardWave(int MinHardWave)
{
	this->MinHardWave = MinHardWave;
}

void ConfigOS::SetMinOP(int MinOP)
{
	this->MinOP = MinOP;
}

void ConfigOS::SetPrice(double price)
{
	this->price = price;
}

string ConfigOS::GetOSName() {
	return OSName;
}

string ConfigOS::GetSUBD() {
	return SUBD;
}

int ConfigOS::GetMinHardWave() {
	return MinHardWave;
}

int ConfigOS::GetMinOP() {
	return MinOP;
}

double ConfigOS::Getprice() {
	return price;
}

void ConfigOS::showall()
{
	printf("|%-23s|%-23c|%-23s|%-23f|\n", OSName.c_str(), SUBD.c_str(), MinHardWave, MinOP, price);
}

ostream& operator<< (ostream& out, const ConfigOS* point) {
	out << "|" << setw(23) << left << point->OSName << "|"
		<< setw(18) << left << point->SUBD << "|"
		<< setw(24) << left << point->MinHardWave << "|"
		<< setw(27) << left << point->MinOP << "|"
		<< setw(20) << left << point->price << "|" << endl;
	return out;
}

istream& operator>> (istream& stream, ConfigOS& point) {
	cout << "Название, СУБД, Мин.Обьем внешней памяти,Мин.Обьем внутренней памяти, цена :";
	stream >> point.OSName;
	stream >> point.SUBD;
	stream >> point.MinHardWave;
	stream >> point.MinOP;
	stream >> point.price;

	return stream;
}