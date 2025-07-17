// program to print the sum of the digit: 12345 ==> 1+2+3+4+5

#include<stdio.h>

int main(){
    int sum =0 ,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num !=0){
        int ld = num % 10;
        sum = sum + ld;
        num = num /10;
   }
    printf("%d", sum);
    return 0;
}