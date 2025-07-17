// program to display AP: 100, 99 , 98 , .... +ve number

#include<stdio.h>

int main(){

    int  a;
    a =100; // first term

    for(int i= 1; a >=0;i++){
        printf("%d ",a);
        a = a - 3;
    }
}