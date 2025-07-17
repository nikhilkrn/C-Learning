//program to print a power of b

#include<stdio.h>

int main(){
    int a,b,product = 1;
    printf("Enter a num: ");
    scanf("%d",&a);
    printf("Enter b num: ");
    scanf("%d",&b);

    for(int i = 1; i<= b; i++){
        product *= a;
    }

    printf("\n%d",product);

    return 0;
}