// program to print the armstrong number from 1 to 500. 

#include<stdio.h>

int main(){

    for(int i = 1; i <= 500; i++){
        int sum = 0 ,num;
        num = i;
        while(num >0){
            int ld = num % 10;
            sum = sum + (ld*ld*ld);
            num = num /10;
        }
        if(sum == i){
            printf("%d ",i);
        }
    }
    return 0;
}