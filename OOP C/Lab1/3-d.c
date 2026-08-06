/*
using recursion , print the pattern 
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1
*/
#include <stdio.h>
int printPattern(int n, int current) {
    if (current > n) {
        return 0;
    }
    for (int i = 1; i <= current; i++) {
        printf("%d ", i);
    }
    printf("\n");
    printPattern(n, current + 1);
    for (int i = 1; i <= current - 1; i++) {
        printf("%d ", i);
    }
    if (current > 1) {
        printf("\n");
    }
    return 0;
}
int main() {
    int n = 5; //for 5rows
    printPattern(n, 1);
    return 0;
}