#include<stdio.h>

int main(){
    int cp,sp;
    printf("Enter Cost Price: ");
    scanf("%d",&cp);
    printf("Enter Selling Price: ");
    scanf("%d",&sp);

    if (sp >cp )
    {
        printf("Congratss! you made a profit of %d.", sp-cp);
    }else{        
        printf("ohh No! you are in loss. Loss amount: %d. Recover it.", cp-sp);
        
    }
    

    return 0;
}