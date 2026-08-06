/*
Write a function to check whether a given number is prime or not. Name the function isPrime(n)
*/
#include<stdio.h>
int isPrime(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(isPrime(n)){
        printf("%d is a prime number.\n",n);
    }
    else{
        printf("%d is not a prime number.\n",n);
    }
    return 0;
}