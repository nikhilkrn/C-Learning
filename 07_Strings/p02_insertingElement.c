// program to insert a character at a particular index.

#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "College"; // lets insert 'k' at 3rd index and push remaining element by 1 index

    for(int i = 6 ; i>=3; i--){
        str[i+1] = str[i];
    }
    str[3] = 'k';
    printf("%s",str);

    return 0;
}