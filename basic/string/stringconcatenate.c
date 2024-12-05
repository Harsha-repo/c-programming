#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char s1[50];
    char s2[50];
printf("enter two strings that are to be concatenated:");
    gets(s1);
    gets(s2);

strcat(s1,s2); // this is the synatx to concatenate and the concatenated string stored inside the s1
puts(s1);
    return 0;
}