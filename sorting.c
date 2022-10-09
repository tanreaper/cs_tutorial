// Selection sort
# include <stdio.h> 

int main() {

    int arr[10], i, array_len, j;
    int min_index;
    int temp;
    printf("Enter the length of arrays");
    scanf("%d", &array_len);
    printf("Enter numbers: \n");
    for(i=0; i< array_len; i++) {
        // ar[i] -> traversing
        scanf("%d", &arr[i]);
    }

    for (i=0; i<array_len - 1; i++) {
        min_index = i;
        for (j= i+1; j<array_len; j++) {
            if (arr[min_index] > arr[j]) {
                min_index = j;
                
            }
            
        }
            if (min_index != i) {
                temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;
            }
       
    }

    printf(" The array after sorting in ascending order:\n");
    for(i=0; i< array_len; i++) {
        printf("%d\n", arr[i]);
    }


}