// program to count the number of element in an given array greater than a given number x.

#include<stdio.h>

int main(){

    int arr[7]={10,15,20,25,30,35,40},num,count = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i = 0 ; i <= 6; i++){
        if(arr[i] > num) {
            count+=1;
        }
    }

    printf("%d ",count);

    return 0;
}