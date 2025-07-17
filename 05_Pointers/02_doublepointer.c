// program to understand double pointer 


#include<stdio.h>

int main(){

    int a = 5;
    int *p = &a; // declaring a pointer

    int **secondPointer = &p; // address of pointer p is stored in second pointer

    printf("%p\n",&p); // address of p

    printf("%p\n",secondPointer); // address of pointer p

    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d",**secondPointer);
    /*
        both pointer is refereing to a pointer.
    */

    



    return 0;
}