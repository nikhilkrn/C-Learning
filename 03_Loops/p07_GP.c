// write a program to print a n terms of geometic progression
// an = a * r^ (n-1) =>an = nth term ; r = ratio ; n=> number of terms; 
#include<stdio.h>

int main(){
    int n, a;
    a = 3;
    printf("Enter a num: ");
    scanf("%d",&n);
    
    for(int i = 1; i<=n;i++){
        printf("%d ", a );
        a = a * 4; // 
    }
    
    return 0;
}