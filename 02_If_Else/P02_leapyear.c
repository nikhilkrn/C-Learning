#include<stdio.h>

int main(){
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if (year % 4 == 0)
    {
        printf("%d is a Leap year",year);
    }else{
        printf("%d is not a leap year",year);
    }
    

    return 0;
}