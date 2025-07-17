// program to print fibonacci number upto n.

#include<stdio.h>

int main(){
    int num,sum = 0, prev=0, current = 1;
    printf("Enter a num: ");
    scanf("%d",&num);
    for (int i = 1; i<=num;i++){
        prev = current;
        current = sum;
        sum = current + prev;
        printf("%d ",sum);
    }

    return 0;
}