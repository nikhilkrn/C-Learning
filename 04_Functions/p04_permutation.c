// program to print the permutation nPr => n!/(n-r)!


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
    unsigned long long n_r_factorial = factorial(n-r);
    /*
    ull is used because if we go number greater that 2.1 *10^9 then it starts giving jebrish value (not actually jebrish) so to prevent from this unsigned long long is used it can go max value of 1.8 * 10^19. long can also be used but supports on 64-bit system only not on 32-bit system
    */

    int combination = n_factorial / n_r_factorial;
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