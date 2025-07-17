// program to reverse the string 

#include<stdio.h>
#include<string.h>

int main(){
    int i = 0;
    char str[40];
    printf("Enter character to reverse: ");
    gets(str);
    while(str[i] != '\0'){
        i = i +1;
    }
    printf("Size of String is : %d \n",i);

    for(int j = i; j >=0 ; j--){
        printf("%c",str[j]);
    }
     

    return 0;
}