// program to print the print the prime factor of a given postive number given by user.

#include <stdio.h>

int checkPrime(int num)
{
    if(num <=1 ){
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
  
}

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0 && checkPrime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}