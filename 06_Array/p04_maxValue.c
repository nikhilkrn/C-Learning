//program to print maximum value out of all element in an array. 

#include<stdio.h>

int main(){

    int arr[5]= {1,10,50,6,120}, highest = arr[0];

    for(int i = 0; i <= 4; i++){
        if (arr[i] > highest){
            highest = arr[i];
        }
    }
    printf("Highest : %d",highest);
    return 0;
}