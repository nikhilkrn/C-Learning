// program to calculate the sum of all element of an array

#include<stdio.h>

int main(){

    int arr[5],sum = 0;
    for(int i = 0; i<=4; i++){
        printf("Enter a number: ");
        scanf("%d",&arr[i]);

        sum+=arr[i];

    }
    printf("sum: %d",sum);
    return 0;
}