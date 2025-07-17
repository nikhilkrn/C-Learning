// take n from user and print n times

#include<stdio.h>

int main(){

    int n;
    printf("Enter value of n: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("%d) Hello world\n",i);
    }

    return 0;
}