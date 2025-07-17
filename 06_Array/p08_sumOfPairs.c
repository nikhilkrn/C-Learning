// program to print the number of paris in the given array whose sum is equal to the given value x. 

#include<stdio.h>

int main(){

    int arr[8] = {1,2,3,4,5,6,7,8},count = 0, num = 12;

    for(int i = 0; i < 8 ;i++){
        for(int j = i; j < 8; j++){
            int sum = arr[i] + arr[j];
            if(sum == num){
                count +=1;
                printf("%d ,%d\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d ",count);
    return 0;
}