
// Given coordinate calculate if all three points (X1,y1),(X2,y2), (X3,y3) lies in a same line or not

#include<stdio.h>

int main(){

	double x1,y1,x2,y2,x3,y3;
    double m1,m2;
	printf("Enter coordinates (x1,y2): ");
	scanf("%lf %lf",&x1,&y1);
	printf("Enter coordinate (X2,y2): ");
	scanf("%lf %lf",&x2,&y2);
	printf("Enter coordinate (X3,y3): ");
	scanf("%lf %lf",&x3,&y3);

    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);
    if(m1 == m2){
        printf("Given coordinates lies in a straight line");
    }else{
        printf("Given coordinates doesn't lies on a stright line.");
    }

    return 0;
}