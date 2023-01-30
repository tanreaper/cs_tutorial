
// implement stack
#include <stdio.h>
#include <stdlib.h>


void push(int);
int pop();
void _display();

int *arr; // ponter to global array.

int main() {

    // implement dynamic array here.
    // Test cases.
    push(3);
    push(5);
    pop(); // output => "5 was popped out from the array at index 1";
    push(6);
    push(7);
    push(8);
    pop() //  output => "8 was popped out from the array at index 3";
    _display(); // Expected output => 3, 5, 6, 7
    return 0;
}

// Implement push
void push(int data) {

    // TODO
}

// Implement pop
int pop() {

//TODO

return pop_value;
}

// Implemetn display
void display() {

}