/* multipline comment

*
**
***
****
*****
******
*/

#include <stdio.h>

int main() {

    int i, j;
    for (i=0; i<6; i++) {
        for(j=0; j<=i; j++ ){
            printf("*");
        }
        print("\n");
    }

    return 0
}





// Loops for-loop, while-loop and do while loop.
// #include <stdio.h>

// int main()
// {
//     for (int i = 0; i <= 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("*\n");
//         }
//     }
// }

/*
 5
 5
 5
 5
 5
 .... n

*/
// #include <stdio.h>

// int main()
// {

//     int n, i;
//     int num_to_print;
//     printf("How many times you want to run the loop ");
//     scanf("%d", &n);

//     // printf("Enter the number you want to print");
//     // scanf("%d", &num_to_print);

//     for (i = 0; i < n; i++)
//     {
//         printf("*\n");
//     }

//     return 0;
// }