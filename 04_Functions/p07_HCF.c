// program to print higj=hest common Factor(Greatest common factor) of two number.

#include <stdio.h>

int factor(int a, int b)
{
    int highest = 1,min = a;
    if (a >= b){
        min = b;
    }
    for (int i = min; i >= min; i--) // for (int i = 2; i <= min; i++) => this also works but iterating from highest to lowest gives the highest number quickly and will break the loop preventing unwanted time and memory consumption.
    {
        if (a % i == 0 && b % i ==0)
        {
            highest = i;
            break;
        }
    }
    return highest;
}

int main()
{

    int num1,num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    printf("Highest common factor of %d and %d : %d ",num1,num2,factor(num1,num2));
    


    return 0;
}

