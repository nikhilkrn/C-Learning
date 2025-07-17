// program to print the second largest element in an array.

#include<stdio.h>
#include<limits.h>
int main(){

    int arr[5]={5,4,3,5,1};
    int max = INT_MIN, second_max = INT_MIN;
    for(int i = 0; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    
    for(int i = 0; i<5; i++){
        if(arr[i] > second_max && arr[i] != max){
            second_max = arr[i];
        }
    }

    printf("Maximum value: %d\n",max);
    printf("Second Maximum value: %d",second_max);

    // Another method using single loop
    printf("\n");

    int Another_Max = INT_MIN, Another_Second_Max = INT_MIN;
    for(int i = 0; i< 5 ;i++){
        if(arr[i] > Another_Max){
            Another_Second_Max = Another_Max;
            Another_Max = arr[i];
        }
        else if(Another_Second_Max < arr[i] && Another_Max != arr[i]){
            Another_Second_Max = arr[i];
        }
    }
    printf("Using Single Loop\n");
    printf("Maximum value: %d\n",Another_Max);
    printf("Second Maximum value: %d",Another_Second_Max);

    return 0;
}