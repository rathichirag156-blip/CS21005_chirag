/* 
Write a function to find the GCD of five numbers. Use the function to compute the LCM of the five numbers.
*/
#include<stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int num1, num2, num3, num4, num5;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    
    int gcd_result = gcd(gcd(gcd(gcd(num1, num2), num3), num4), num5);
    int lcm_result = lcm(lcm(lcm(lcm(num1, num2), num3), num4), num5);
    
    printf("GCD of the five numbers is: %d\n", gcd_result);
    printf("LCM of the five numbers is: %d\n", lcm_result);
    
    return 0;
}