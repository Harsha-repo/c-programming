#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char str[50];
    printf("enter a string :");
   
    gets(str);
     
    puts(str);
printf("the length of the string is %d",strlen(str));


    return 0;
}