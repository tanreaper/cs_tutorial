#include "common.h"
using namespace std;

int main() {
    vector <string> words;
    stringstream ss("Some Random Words");
    string word;
    while(ss >> word) {
        words.push_back(word);
    }
    // for (int i = 0; i < words.size(); i++) {
    //     cout << words[i] << endl;
    // }
    for (auto x: words)
        cout << x << endl;
}