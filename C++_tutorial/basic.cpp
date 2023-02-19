#include <cstdlib>
#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>

using namespace std;
int main(int argc , char **argv) {
    // cout << argv[1] << endl;
    // cout << "Min unsigned short int " << numeric_limits<unsigned short int>::min() << endl;
    // cout << "Max unsigned short int " << numeric_limits<unsigned short int>::max() << endl;
    // cout << "Min short int " << numeric_limits<short int>::min() << endl;
    // cout << "Max short int " << numeric_limits<short int>::max() << endl;
    
    int age43 = 43;
    bool canIVote = (age43 >= 18) ? true : false;
    cout.setf(ios::boolalpha);
    cout << "Can Derek Vote : " << canIVote << endl;

    auto i = 10;
    if (i == 10) {
        ;
    }
    return 0;
}
