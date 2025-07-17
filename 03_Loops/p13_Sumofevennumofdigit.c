// to print sum of even number of a digit. 12345 ==> 2+4= 6

#include<stdio.h>

int main(){
    int sum =0 ,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num !=0){
        int LastDigit = num % 10;
        if(LastDigit %  2 == 0){
            sum = sum + LastDigit;
        }
        num = num /10;
   }
    printf("%d", sum);
    return 0;
}