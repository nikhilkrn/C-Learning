// program to reverse the given number

#include<stdio.h>

int main(){
    int num, LastDigit = 0, reversed_number = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0){
        LastDigit = num % 10;
        reversed_number = reversed_number*10;
        reversed_number = (LastDigit + reversed_number );
        num = num / 10;
    }
    printf("%d",reversed_number);
    return 0;
}