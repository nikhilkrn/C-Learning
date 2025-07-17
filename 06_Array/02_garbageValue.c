// program to demostrate the garbage value

#include<stdio.h>

int main(){

    int arr[10],x; 
    printf("%d %d",arr[0],x); // both will give some random value as we haven't declared any value for them. every time we run program it will give some random value. and this is same for all either it is array or integer or character. 

    return 0;
}