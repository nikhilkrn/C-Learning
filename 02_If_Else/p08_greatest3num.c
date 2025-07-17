#include <stdio.h>

int main()
{

    int x, y, z;

    printf("Enter a number(X): ");
    scanf("%d", &x);
    printf("Enter a number(y): ");
    scanf("%d", &y);
    printf("Enter a number(z): ");
    scanf("%d", &z);

    if (x > y && x > z)
    {
        printf("X is greatest: %d", x);
    }
    if (y> x && y> z)
    {
        printf("Y is greatest: %d", y);
    }
    if(z> x && z > y)
    {
        printf("Z is greatest: %d", z);
    }

    printf("\n");

    //Another method

    if(x>y ){
        if(x>z){
            printf("X is greatest. %d",x);
        }else{
            printf("Z is the greatest. %d",z);
        }
    }else{
        if(y>z){
            printf("Y is the greatest. %d", y);
        }
        else{
            printf("Z is the greatest. %d",z);
        }
    }

    return 0;
}