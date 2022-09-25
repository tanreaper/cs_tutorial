#include <stdio.h> // standard input and output

// Student gets A if there score >= 90
// Student gets B if there score <90 and >= 80
// Student gets C

// Conditional Statement: if and else
int main()
{
    int marks;
    printf("Please enter your marks \n");
    scanf("%d", &marks);
    printf("%d\n", marks);
    if (marks >= 90)
    {
        printf("The student has A grade\n");
    }
    else if (marks < 90 && marks >= 80)
    {
        printf("The student has B grade\n");
    }
    else if (marks < 80 && marks >= 70)
    {
        printf("The student has C grade\n");
    }
    else
    {
        printf("The has D grad\n");
    }
}
