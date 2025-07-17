// program to print sum of 2 number using function.

#include<stdio.h>

int sum(int a, int b){
    return a + b ;
}

int main(){
    int num1,num2;
    printf("Enter a number: ");
    scanf("%d",&num1);
    printf("Enter a number: ");
    scanf("%d",&num2);

    int add = sum(num1,num2);
    printf("sum: %d ",add);
    
    return 0;
}