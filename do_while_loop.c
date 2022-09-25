#include <stdio.h>
#include <stdlib.h>


int main() {

    int i = 5, j = 5;
    char ch;
    int n1, n2;
    int option1, option2;


    // this is do while loop
    do {
       printf("Enter two number \n");
       scanf ("%d %d", &n1, &n2);
       printf( "Please select what do you want to do with the numbers: ");
       printf( " Press 1 for addition and 2 for subtraction: ");
       scanf("%d", &option1);
       printf("Press escape to exit ");
       //fflush(stdin);
       scanf(" %c", &ch);
       printf("%d\n", (int)ch);
    } while ((int) ch != 27);

    return 0;
}
    