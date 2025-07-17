// program to print an array by changing it's value of all odd indexed element to its second multiple and increase the value of even indexed element by 10.

#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};

    for(int i = 0; i < 5; i++ ){
        if(i % 2 == 0){
            arr[i]+=10;
        }
        else{
            arr[i]*=2;
        }
    }
    for(int i = 0; i < 5; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}