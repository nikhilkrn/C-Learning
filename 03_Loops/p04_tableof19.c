// program to print table of 19

#include<stdio.h>
int main(){

    for(int i = 1; i<=10;i++){
        printf("19 * %d = %d \n",i, 19*i);
    }
    // Another method
    for(int i = 19; i<=190;i=i+19){
        printf("%d ",i);
    }

    return 0;
}