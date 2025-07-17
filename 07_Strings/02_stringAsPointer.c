#include<stdio.h>
#include<string.h>

int main(){
    char str[] =  "Hello WOrld!!";
    char *ptr = str;
    int i = 0;
    
    while(*ptr != '\0'){
        printf("%c\n",*ptr);
        ptr++;
        printf("%p\n",ptr);
        i++;
    }

    printf("%p", ptr);
    return 0;
}