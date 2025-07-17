// program to understand pointer

#include<stdio.h>

int main(){

    int a = 5;
    int *p = &a; // declaring a pointer

    printf("%p\n",&a); // %p => prints the address of valued stored in a, &a give reference of address
    // address may differ from one system to other.

    printf("%p\n",p); // address of a is stored in variable p

    printf("%p\n",&p); // address of variable p
    
    printf("%d\n",*p); // *p returns the value stored in variable a

    *p = 7; // this will change value of a 
    printf("%d ",a);

    return 0;
}