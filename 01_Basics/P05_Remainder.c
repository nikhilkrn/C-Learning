#include<stdio.h>

int main(){
    printf("\n");

    int a,b,remainder,quotient;
    printf("Enter a number (a,b; a>b): ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);
    
    quotient = a/b;
    remainder = a-(b*quotient);

    printf("Remainder: %d",remainder);

    return 0;
}