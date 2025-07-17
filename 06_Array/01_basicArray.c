// program to understand basics of array.

#include<stdio.h>

int main(){
    
    /*                  declaration of array;                            */

    int arr[6] = {1,2,3,4,5,6}; // arr[6]=> 6 represents maximum num of element that an array can store.

    /*                  accessing array                            */

    printf("%d ",arr[0]); // to access first elem. i.e 1 => arr[0] where 0 is index of array, in array index starts with 0.
    printf("%d ",arr[1]);
    printf("%d ",arr[2]);
    printf("%d ",arr[3]);
    printf("%d ",arr[4]);
    printf("%d ",arr[5]);
    // printf("%d ",arr[6]); // => this gives an error index out of bound or range. or some jebrish value

    printf("\n");

    /*                  changing value of a particular index                            */

    arr[0]= 10;
    printf("%d",arr[0]); // 1 will become 10

    printf("\n");

    /*              taking input from user and storing in array              */

    int arr2[5];
    for(int i =0; i<=4;i++){
        printf("Enter a number: ");
        scanf("%d",&arr2[i]);
    }

    for(int i =0; i<=4;i++){
        printf("%d ",arr2[i]); // printing an array
    }

    return 0;
}