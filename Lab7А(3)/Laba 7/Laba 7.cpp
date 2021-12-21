#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class complex {
public:
	complex();
	complex(double a, double b);

	string getS();

private:
	string S;
	double a;
	double b;

	void setS();
};

complex::complex() {
	S = "";
	a = 0;
	b = 0;
}

void complex::setS() {
	ostringstream s;
	s << "" << a << " + " << b << "i";
	S = s.str();
}
/// <summary>

complex::complex(double a, double b) {
	this->a = a;
	this->b = b;
	setS();
}

string complex::getS() {
	return S;
}

int main() {

	setlocale(LC_ALL, "RU");

	vector<complex> mas;

	ifstream file;
	file.exceptions(ifstream::badbit | ifstream::failbit);

	try {
		file.open("read.txt");

		if (file.is_open()) {
			double a, b;

			while (file >> a >> b) {
				mas.emplace_back(a, b);
			}
		}
	}

	catch (const ifstream::failure& target) {
		if (!file.is_open())
			cout << "ERROE::READ FILE" << endl << target.what() << endl << target.code() << endl;
	}
	file.close();


	for (auto& p : mas)
		cout << p.getS() << endl;
	/// <summary>
	/// <fill(/000)>
	/// f
	/// </summary>
	/// <returns></returns>
	ofstream fileout;
	try {
		fileout.open("write.txt");
		for (auto& p : mas)
			fileout << p.getS() << endl;
		
	}
	/// <summary>
	/// <targetcode -> setbalance>
	/// </summary>
	/// <returns></returns>
	catch (const ofstream::failure& target) {
		if (fileout.is_open())
			cout << "ERROE::WRITE FILE" << endl << target.what() << endl << target.code() << endl;
	}
	fileout.close();
}