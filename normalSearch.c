#include <stdio.h>

int main() {

    int arr[] = {2, 3, 4, 10, 40};
    int n = 11;
    int i;
    int count = 0;  //
    int answer = -1;
    for (i=0; i<5; i++) {
        if (arr[i] == n) {
           answer = i;
           break;
        }
    }
    if (answer == -1) {
        printf("%d\n", -1); 
        // return -1;
    } else {
        printf("index found %d\n", answer);
    }
    return 0;
}