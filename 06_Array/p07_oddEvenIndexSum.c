// program to print the difference of sum of even index element to sum of odd index element.

#include<stdio.h>

int main(){

    int arr[10]={1,2,3,4,5,6,7,8,9,10}, evenIndexSum = 0, oddIndexSum = 0, diff = 0;

    for(int i = 0; i< 10;i++){
        if(i %2 == 0){
            evenIndexSum+=arr[i];
        }else{
            oddIndexSum += arr[i];
        }
    }

    diff = evenIndexSum - oddIndexSum;

    printf(" Difference: %d", diff);

    return 0;
}