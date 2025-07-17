// to print sum of a number and also reverse of number and sum the reverse with orignal number : 12345 => 54321 ==> 66666

#include<stdio.h>

int main(){
    int num,LastDigit = 0, reversed_number = 0,copy_num,sum;
    printf("Enter a number: ");
    scanf("%d",&num);
    copy_num = num;
     while(copy_num > 0){
        LastDigit = copy_num % 10;
        reversed_number = reversed_number*10;
        reversed_number = (LastDigit + reversed_number );
        copy_num = copy_num / 10;
    }

    sum = reversed_number+num;
    printf("%d",sum);

    return 0;
}