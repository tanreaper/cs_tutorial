// Example of static array.
#include <stdio.h>
int main () {

    int n, i;
    int arr[10];
    printf("Please enter how many students are there\n");
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        printf("Enter the marks of the student: ");
        scanf("%d", &arr[i]);
    }

    printf("The marks of the students are\n");
    for (i=0; i<n; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}