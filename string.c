#include <stdio.h>


int main() {
    char name[10];
    char name2[10];
    int i, j;
    for (i = 0; i<6; i++) {
        printf("Enter character");
        fflush(stdin);
        scanf("%c", name);
    }


    printf("Enter Name");
    scanf("%s", name);
}