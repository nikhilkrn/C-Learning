// program to copy the element of array to another array but in reverse order

#include<stdio.h>

int main(){

    int arr[5] = {9,8,7,6,5}, secondArr[5];

    for(int i = 4;i >=0;i--){
        secondArr[4-i]= arr[i];
    }

    for(int i = 0;i < 5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i = 0;i < 5;i++){
        printf("%d ",secondArr[i]);
    }


    return 0;

}
