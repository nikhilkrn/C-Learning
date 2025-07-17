// given a array of marks of student & to print roll no (index) of student with marks less than 35.

#include<stdio.h>

int main(){

    int marks[5];
    for (int i = 0; i<=4; i++){
        printf("Enter a number: ");
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i<=4; i++){
        if(marks[i] <=35){
            printf("%d ",i+1);
        }
    }
    

    return 0;
}