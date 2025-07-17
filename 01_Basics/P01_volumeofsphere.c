#include<stdio.h>

int main(){
    printf("\n");

    int radius = 7;
    float volume = 4 * 3.1415* radius*radius*radius /3;
    float area = 3.1416*radius*radius;

    printf("Volume of sphere of radius %d : %f\n",radius,volume);
    printf("Area of sphere of radius %d : %f",radius,area);

    return 0;
}