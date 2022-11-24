
// implement stack
#include <stdio.h>
#include <stdlib.h>


void push(int);
int pop();
void _display();
//allows push pop to be used
int *arr; // ponter to global array.
int i = 0;
int main() {
    // implement dynamic array here.
    arr = (int*) malloc (sizeof(int) * 5);

    // Test cases.
    push(3);
    push(5);
    pop(); // output => "5 was popped out from the array at index 1";
    push(6);
    push(7);
    push(8);
    pop(); //  output => "8 was popped out from the array at index 3";
    _display(); // Expected output => 3, 5, 6, 7
}

// Implement push
void push(int data) {
     arr[i] = data;
     i++;
    // TODO
}

// Implement pop
int pop() { 
int pop_value;
if(i<0)
{
    printf ("error");
    return -1;
}
else
{
    i = i-1;
    pop_value = arr[i];
    return pop_value; 
}

}

// Implemetn display
void _display() {
    int j;
    for(j=0; j<i; j++) {
        printf("%d\n", arr[j]);
    }

}