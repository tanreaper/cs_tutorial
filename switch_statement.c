#include <stdio.h>
#include <stdlib.h>

#define esc 27
// #define enter 10
void add(int, int);
void subtract(int, int);

int main()
{
    char ch;
    int num1, num2;
    char dtm[100];
    do
    {
        printf("Please Enter two numbers: \n");
        scanf("%d %d", &num1, &num2); // num1 = 12 , num2 = 14
        // printf("%d %d",  num2); // -> 12, 14
        fflush(stdin)
        printf("Press 1 for Addition: \n");
        printf("Press 2 for subtraction: \n");
        printf("Press escape to exit");
        scanf("%c", &ch); // -- it took enter as an input
        printf("%c", ch);
        switch(ch)
        {   
            printf("Enters Switch case!");
            case '1': add(num1, num2); // pass by parameter/ pass by value.
                break;
            case '2': subtract(num1, num2);
                break;
            case esc :
                printf("escape has been pressed\n");
                break;
            default: 
                printf(" Wrong button press, Please See option\n");

        }
    }
    while((int) ch != 27);
    return 0;
}

void add(int n1, int n2) {
    printf("%d %d", n1, n2);
    // printf("%d %d" num1, num2); // -> 12 , 14
    printf("Adding ...!");
    int sum = n1 + n2;
    printf("The total is %d\n", sum);
}

void subtract(int n1, int n2) {
    printf(" Subtract ...!");
    printf("Subtract..!");
    int sub = n1 - n2;
    printf("The total is %d\n", sub);
}