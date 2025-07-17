// program to print table of N

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number to get table: ");
    scanf("%d",&num);

    for(int i =1; i<=10; i++){
        printf("%d * %d = %d \n",num,i, num*i);

    }
    return 0;
}