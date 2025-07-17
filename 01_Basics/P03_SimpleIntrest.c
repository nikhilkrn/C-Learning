#include<stdio.h>

int main(){
    printf("\n");
    int principal = 1000;
    int time = 2;
    float rate = 3.6;
    float SI = (principal*time*rate)/100;
    
    printf("Simple Intrest: %f",SI);

    printf("\n\n");
    
    float Principal,Time,Rate,Simple_Intrest;
    printf("Enter Principal Ammount: ");
    scanf("%f",&Principal);
    printf("Enter Time: ");
    scanf("%f",&Time);
    printf("Enter Rate: ");
    scanf("%f",&Rate);
    
    Simple_Intrest = (Principal*Time*Rate)/100;

    printf("Simple Intrest: %f", Simple_Intrest);

    return 0;
}