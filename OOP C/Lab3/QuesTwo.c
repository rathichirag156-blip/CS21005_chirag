// 2. Write a generic function to swap two variables. It should work with int, double, string, etc. You need
// to write a main function to test the generic function.

#include <stdio.h>

#define SWAP(type, a, b) \
do {                     \
    type temp = a;       \
    a = b;               \
    b = temp;            \
} while (0)

int main()
{
    
    int x = 10, y = 20;
    printf("Before swapping integers: x = %d, y = %d\n", x, y);
    SWAP(int, x, y);
    printf("After swapping integers:  x = %d, y = %d\n\n", x, y);

    
    double p = 3.14, q = 6.28;
    printf("Before swapping doubles: p = %.2lf, q = %.2lf\n", p, q);
    SWAP(double, p, q);
    printf("After swapping doubles:  p = %.2lf, q = %.2lf\n\n", p, q);

    
    char str1[20] = "Hello";
    char str2[20] = "World";

    printf("Before swapping strings: str1 = %s, str2 = %s\n", str1, str2);

    char *s1 = str1;
    char *s2 = str2;
    SWAP(char *, s1, s2);

    printf("After swapping strings:  str1 = %s, str2 = %s\n", s1, s2);

    return 0;
}