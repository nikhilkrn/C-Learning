// program to print even number between 1 to 100

#include<stdio.h>

int main(){
    printf("\n");
    printf("Even number \n");
    for(int i = 1 ; i<=100;i++){
        if(i%2 == 0){
            printf("%d ",i);
        }
    }
    printf("\nOdd number \n");
    for(int i = 1 ; i<=100;i++){
        if(i%2 != 0){
            printf("%d ",i);
        }
    }

    return 0;
}