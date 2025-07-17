#include<stdio.h>

int main(){
    int percentage;
    printf("Enter percentage to calulate grade: ");
    scanf("%d",&percentage);

    if(percentage >= 90 && percentage <= 100){
        printf("Excillent");
    }
    else if (percentage >=80 && percentage < 90)
    {
        printf("Very Good");
    }
    else if (percentage >=70 && percentage < 80)
    {
        printf("Good");
    }
    else if (percentage >=60 && percentage < 70)
    {
        printf("can do better");
    }
    else if (percentage >=50 && percentage < 60)
    {
        printf("Average");
    }
    else if (percentage >=40 && percentage < 50)
    {
        printf("Bellow Average");
    }
    else if (percentage < 40)
    {
        printf("Fail");
    }else{
        printf("Enter Valid percentage.");
    }
    

    return 0;
}