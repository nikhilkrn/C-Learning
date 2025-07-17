#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num > 99 && num < 1000){  // && => Logical And || => logical Or. these are logical operator
        printf("Number is of 3 digit");
    }

    return 0;
}