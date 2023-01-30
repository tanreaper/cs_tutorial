#include <stdio.h>
int add(n1, n2) {
    int sum = n1 + n2;
    return sum;
}

int main() {
    // int s = add (1 ,2);
    // printf("%d", s); // 3
    int answer = 3;
    int carry = answer > 9;

    printf("%d\n", carry);


}