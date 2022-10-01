# include <stdio.h>

int main() {

    int arr[10], i, array_len;
    printf("Enter the length of arrays");
    scanf("%d", &array_len);
    printf("Enter numbers: \n");
    for(i=0; i< array_len; i++) {
        // ar[i] -> traversing
        scanf("%d", &arr[i]);
    }

    printf(" The array after sorting in ascending order:\n");
    for(i=0; i< array_len; i++) {
        printf("%d\n", arr[i]);
    }


}