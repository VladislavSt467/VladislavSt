#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class File {
private:
    string mas[3];
    double line_1;

public:
    File();
    ~File();

    void UP();
    void StToDB();
    void Delete_prob();
};

void File::UP() {
    transform(mas[1].begin(), mas[1].end(), mas[1].begin(), ::toupper);
}

void File::Delete_prob() {

    while (mas[2].find(' ')  <=mas[2].length()) {

        mas[2].erase(mas[2].find(' '), 1);

    }
}

void File::StToDB() {
    line_1 = stod(mas[0]);
}

File::File() {

    string line;

    ifstream in("test.txt"); 
    if (in.is_open())
    {
        int i = 0;
        while (getline(in, line))
        {
            this->mas[i] = line;
            i++;
        }
    }
    in.close();    
}

File::~File() {
    ofstream out;          
    out.open("test_pop.txt"); 
    if (out.is_open())
    {
        out << fixed  << setprecision(2) << line_1 << endl;
        for (int i = 1; i < 3; i++) {
            out << mas[i] << endl;
       }
    }
}

int main() {

    File test;

    test.StToDB();

    test.UP();

    test.Delete_prob();

    return 0;
}