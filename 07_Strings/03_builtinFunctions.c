// program to demonstrate builtin function for string

#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "Nikhil";
    char str2[7];
    strcpy(str2,str);
    
    int size = strlen(str);
    printf("%d\n",size);
    
    printf("%s\n",str2);

    char s1[]= "Nikhil";
    char s2[] = "Karn";
    
    strcat(s1,s2);
    printf("%s",s1);
    printf("\n");

    return 0;
}