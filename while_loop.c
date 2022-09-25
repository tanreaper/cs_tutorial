// while loop.
/*

*****
****
***
**
*

*/
#include <stdio.h>

int main() {

    int i = 0;
    
    while(i < 5) {
        int j=0;
        while(j < 5-i) {
            print(*);
            j++;
        }
        // for(j=0; j < 5-i; j++) {
            // print(*);
        // }
        printn("\n");
        i++;    
    }

    return 0;
}