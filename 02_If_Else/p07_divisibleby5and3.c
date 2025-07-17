#include<stdio.h>

int main(){

    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 5 == 0 )
    {
        if(x % 3 == 0){//this is nested if-else statement
            printf("%d is Divisible by 5 and 3",x);
        }else{
            printf("%d is not Divisible by 5 and 3",x);
        }
    }else{
        printf("%d is not Divisible by 5 and 3",x);
    }

    printf("\n");
     if (x % 5 == 0 || x % 3 == 0)
    {
        printf("%d is Divisible by 5 or 3",x);
    }else{
        printf("%d is not Divisible by both 5 and 3",x);
    }
    
    return 0;
}