// program to print AP(Aritmenatic Progression) up to n ex: 1,3,5,7, ..... ,n

// formula => a + (n-1)*d

#include<stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i = 1; i<=2*n-1;i=i+2){  // i = 1 first num; i =2*n-1 => last term ( n=> number of terms req.); i=i+2 => difference
        printf("%d ",i);
    }
    printf("\n");
    for(int i = 4; i<=3*n+1;i=i+3){  // first term = 4; difference = 3 /// 4,7,10,13,16......,n
        printf("%d ",i);
    }
    

    // generalization
    printf("\n");
    int first_term, difference, last_term;
    printf("Enter first number: ");
    scanf("%d",&first_term);
    printf("Enter Difference: ");
    scanf("%d",&difference);
    printf("Enter a number of terms you want: ");
    scanf("%d",&last_term);
    
    for(int i = first_term;i<=(first_term + (last_term-1)*difference);i+=difference){
        printf("%d ",i);
    }

    // Another Methods as well
    printf("\n");
    int num, a;
    a =10; // first term
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i= 1; i<=num;i++){
        printf("%d ",a);
        a = a + 3 ;// 3 => difference
    }

    return 0;
}