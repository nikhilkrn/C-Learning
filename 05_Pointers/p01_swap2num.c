// program to swap two number using function and pointer.

/*
    if we just declare a function and pass the value of lets say a,b in function and tries to change the value of
    a and b then there wont be any change in value as we directly gave value. this can be solved or avoided using
    pointer by providing the reference i.e address of actual a & b.
*/

#include<stdio.h>
void swapping(int *a, int *b){ // gettnig the value stored in address of a variable
    *b = *a + *b;
    *a = *b - *a;
    *b = *b - *a;
    return ;
}

int main(){
    int a,b,temp;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);


    swapping(&a,&b); // passing the address of variable

    printf("a: %d b: %d",a,b);


    return 0;
}