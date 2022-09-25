#include <stdio.h>

// Global variables.
struct Student {
    char name[10]; // String.
    int roll;
    char subject[10];
    int marks;
} ;

// struct Subject {
    // TODO
// }
int test;

int main() {
    struct Student st[10];
    int i;
    for (i=0; i<2; i++) {
        printf("Enter Student name: ");
        scanf("%s", &st[i].name);
        
        printf("Enter Student roll no: ");
        scanf("%d", &st[i].roll);

        printf("Enter subject: ");
        scanf("%s", &st[i].subject);

        printf("Enter marks: ");
        scanf("%d", &st[i].marks);
    }

    printf("Details of the Student\n");
    for (i=0; i<2; i++) {
        printf("Student : %s\n", st[i].name);
        printf("Roll No : %d\n", st[i].roll);
        printf("Subject : %s\n", st[i].subject);
        printf("marks : %d\n", st[i].marks);
    }
}

