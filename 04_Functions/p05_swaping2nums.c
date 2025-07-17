// program to swap two numbers. a=3;b=5 => a=5;b=3

#include<stdio.h>

int main(){
    int a,b,temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);

    // using third variable:
    
    temp = a;
    a = b;
    b = temp;

    printf("a: %d b: %d",a,b);
    
    // without using third variable
    printf("\n");
    b = a + b;
    a = b - a;
    b = b - a;
    printf("a: %d b: %d",a,b);

    return 0;
}