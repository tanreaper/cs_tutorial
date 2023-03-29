#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main () {
    cout << "Running main" << endl;
    ostringstream oss;
    string somevar = "test";
    oss << "sometext " << somevar << " "<< "sometext " << somevar << endl;
    string var = oss.str();
    cout << var;
    return 0;
}

