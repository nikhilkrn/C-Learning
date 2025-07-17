// program to check if a given number is prime number or not

#include <stdio.h>

int main()
{
    int num, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        printf("%d is not prime", num);
    }else{
        printf("%d is prime", num);
    }
    return 0;
}