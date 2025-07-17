 //  program to count the digit of a given number: 12685 ==> 5

#include<stdio.h>

int main(){
    int count =0 ,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num !=0){
        num = num /10;
        printf("%d ",num);
        count=count+1;
    }
    printf("\n%d", count);
    return 0;
}