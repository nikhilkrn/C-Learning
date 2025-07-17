// program to print ASCII value of all lower case alphabet A=> 65,B=> 66, ....

#include<stdio.h>

int main(){

    for(int i = 65; i<=90; i++){ // upper case
        char ch = (char)i;
        printf("%c => %d \n", ch,i);
    }

    return 0;
}