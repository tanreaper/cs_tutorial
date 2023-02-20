#include <iostream>
#include <fstream>

using namespace std;



int main() {
    fstream newfile;
    newfile.open("studentName.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while(getline(newfile, tp)) {
            cout << tp << "\n";
        }
    }
}