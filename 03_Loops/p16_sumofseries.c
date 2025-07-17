// to print the sum of series up to n : 1-2+3-4+5-6+7-8......n

#include<stdio.h>

int main(){
    int num,sum =0, efficient_sum = 0;
    printf("Enter a num: ");
    scanf("%d",&num);
    // this is inefficient way 
    for(int i = 1; i<=num ; i++){
        if(i%2 == 0){
            sum-=i;
        }else{
            sum +=i;
        }
    }
    printf("Infficient way result: %d\n",sum);

    // efficient way 

    if(num %2 == 0 ){
        efficient_sum = -(num/2);
    }else{
        efficient_sum = (-num/2)+num;
    }

    printf("Efficient way result: %d ",efficient_sum);
    return 0;
}