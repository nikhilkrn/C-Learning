// program to print factorial of each number upto n.

#include<stdio.h>

int main(){
    int num,fact = 1;
    printf("Enter a num: ");
    scanf("%d",&num);
    for (int i = 1; i<=num;i++){
        fact = fact * i;
        printf("factorial of %d is: %d \n",i,fact);
    }

    return 0;
}