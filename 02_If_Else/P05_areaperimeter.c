#include<stdio.h>

int main(){
    int len,bre;
    float area,perimeter;
    
    printf("Enter Length: ");
    scanf("%d",&len);
    printf("Enter Breadth: ");
    scanf("%d",&bre);

    area = len*bre;
    perimeter = 2 * (len+bre);

    if(area>perimeter){
        printf("Area is greater. Area = %f",area);
    }else{
        printf("Perimeter is greater. Perimeter = %f",perimeter);
    }

    return 0;
}