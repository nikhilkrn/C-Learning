// program to print a pascal triangle
/*
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1

1st row = >1
2nd row => 1+0 => 1 1
3rd row => 1 (1+1 from second row)2 1
4rth row => 1 2+1 2+1 1
5th row => 1 3+1 3+3 3+1 1

*/

// using combination where rows is n and column is r.

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

    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    // using combination
    for(int i=0; i<n; i++){
        for(int j = 0; j <=i; j++){
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }

    // without using combination
    printf("\n");
    printf("Without using combination   *Quite effective*\n");
    for(int i=0 ; i<n ; i++){
        int first = 1;
        for(int j=0 ; j<=i ; j++){
            printf("%d ",first);
            first = first * (i - j)/(j + 1);
        }
        printf("\n");
    }

    

    return 0;
}