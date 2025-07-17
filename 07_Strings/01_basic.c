// program to understand the basics of Strings.

#include<stdio.h>
#include<string.h>

int main(){
    
    char arr[] = "Hello i am learning c\0"; // one way to define string  => String is nothing but a character array // \0 is not compulsory. compiler automatically understand \0 at the end of ""
    int i = 0;
    while( arr[i] != '\0'){ // \0 is a null pointer it's asiic value is 0 can be used to indicate end of string instead of couting everytime and changing it.
        printf("%c",arr[i]);
        i++;
    }

    printf("\n");

    //Another method to print and declare string (better one!!)
    char str[] = "Hi i am a good boy!";

    printf("%s\n",str);
    puts(str);

    //Taking inputs

    char str2[20];
    //scanf("%[^\n]s",&str2); // only first word will be considered if space is given then after space everyword will be discarded. 
    // [^\n] is used for taking word input if not used then only one word will be considered but using this looks codes ugly so gets is used. 
    gets(str2);
    printf("Input was: %s",str2); 

    return 0;
}