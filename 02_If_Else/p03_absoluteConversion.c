#include<stdio.h>

int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num < 0)
    {
        num = num * (-1);
        printf("absolute number: %d", num);
    }else{
        printf("absolute number: %d", num);
    }

    return 0;
}