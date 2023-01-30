#include <stdio.h>
#include <string.h>  
#define BUFFERSIZE 4096

enum numbers {I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000};

int main() {
    char str[BUFFERSIZE];
    printf("Enter Roman number\n");
    fgets(str, (sizeof(str) / sizeof(str[0])), stdin);
    printf("%s", str);
    int value = strcmp(str, "test\n");
    printf("the value is %d\n", value);
    if (strcmp(str, "V\n") == 0) {
        printf("the enum value is %d\n", V);
    }
    printf("here\n");
return 0;
}