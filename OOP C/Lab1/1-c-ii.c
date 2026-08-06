/*
Use the function, isPrime(n), to implement a function primeSeries(n) to print all prime numbers from 1 to n.
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
int primeSeries(int n){
    int i;
    for(i=1;i<=n;i++){
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Prime numbers from 1 to %d are: ",n);
    primeSeries(n);
    return 0;
}