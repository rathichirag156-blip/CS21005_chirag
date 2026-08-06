/* 
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
 1 3 3 1
  1 2 1
   1 1
    1
*/
#include <stdio.h>
int main() {
    int i, j, rows = 5;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        int num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    for (i = rows - 2; i >= 0; i--) {
        for (j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }
        int num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}