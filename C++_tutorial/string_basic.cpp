#include "common.h"
using namespace std;

int main(int argc, char** argv) {
    string str1 = "I'm a string";
    cout << "1st: " << str1[0] << endl;
    cout << "Last: " << str1.back() << endl;
    cout << "Length: 5" << str1.length() << endl;
    string str2 = str1;
    string str3(str2, 4);
    string str4 = str1 + " and your not";
    str4.append("!");
    str4.erase(12, str4.length() - 1);
    cout << "New String " << str4 << endl; 
    if(str4.find("string") != string::npos) {
        cout << "String Index: " << str4.find("string") << endl;  
    }
    cout << "Substring : " << str4.substr(6, 6) << endl;
    string strNum = to_string(1+2); 
    cout << "I'm a String: " << strNum << endl;

    char letterZ = 'z';
    char num5 = '5';
    char aSpace = ' ';

    cout << "Is z a letter or number " << isalnum(letterZ) << endl;
    cout << "Is z a letter " << isalpha(letterZ) << endl;
    cout << "Is 5 a number " << isdigit(num5) << endl;
    cout << "Is space a space " << isspace(aSpace) << endl;
}