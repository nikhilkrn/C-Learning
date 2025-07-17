// program to print combination nCr => n!/r!*(n-r)!

#include<stdio.h>

int factorial(int num){

    int fact = 1;
    for (int i = 1; i<=num;i++){
        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r){
    unsigned long long n_factorial = factorial(n);
    unsigned long long r_factorial = factorial(r);
    unsigned long long n_r_factorial = factorial(n-r);
    int combination = n_factorial / (r_factorial*n_r_factorial);
    return combination;
}

int main(){

    int n, r;
    printf("Enter the value of N & R: ");
    scanf("%d %d",&n,&r);

    int result = combination(n,r);
    printf("Combination of %dc%d : %d",n,r,result);

    return 0;
}