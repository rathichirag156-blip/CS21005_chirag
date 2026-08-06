/*
      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 
  1 2 3 2 1 
    1 2 1 
      1
*/
#include <stdio.h>
int main() {
    int i, j, rows = 4;
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (j = i - 1; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}