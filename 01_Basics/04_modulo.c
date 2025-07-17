#include<stdio.h>
/*
    a%b = a if a <b
*/


int nomain(){
    printf("\n");

    int a,b,remainder;
    printf("Enter a number (a,b; a>b): ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);
    

    remainder = a % b;

    printf("Remainder: %d",remainder);


    return 0;
}