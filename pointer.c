#include <stdio.h>
#include <stdlib.h>

int add (int , int);
int main() {

    int a[5];
    a[0] = 10;
    a[1] = 20;
    int *p = &a;
    // printf("%x\n", p);
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    printf("%x\n", p);
    printf("%d\n", *(p+2));

    int *q = (int*) malloc (sizeof(int) * 5);
    float *j = (float*)malloc(sizeof(float) * 5);
    printf("the address of 1st block %u\n", q);
    printf("the address of 2nd block %u\n", q+1);

    printf("the 1nd element of the array is %d\n", *(q));
    printf("the 2nd element of the array is %d\n", *(q+10));

    printf("the size of memory we just allocated %zu\n", (sizeof(int)*5));

    q = realloc(q, (6) * sizeof(int));
    q[6] = 120;

    int *x = (int*) calloc(5, sizeof(int));



    // printf("The sum of two numbers %d\n", add(a[0], a[1]));

    // void *malloc(size_t size);

    // malloc
    // calloc
    // realloc


return 0;
}

int add (int a, int b) {
    int sum = a + b;
    return sum;

}