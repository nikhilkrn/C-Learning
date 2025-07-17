// program to display reverse GP: 100, 50, 25, ...., upto n-terms

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    float a = 100.0;
    for(int i = 1; i <= num; i++){
        printf("%f ", a);
        a = a * 0.5;
    }

    return 0;
}