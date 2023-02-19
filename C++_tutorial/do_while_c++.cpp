#include "common.h"
using namespace std;

int main() {
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess = 0;
    do {
        cout << " Guess the Number :";
        cin >> guess;
        if (guess > secretNum) cout << "Too Big\n";
        if (guess < secretNum) cout << "Too Less\n";
    } while(guess != secretNum);
    cout << "You guessed the number";
}