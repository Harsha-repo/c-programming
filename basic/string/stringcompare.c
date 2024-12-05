#include<stdio.h>
#include<string.h>

int main(){

char s1[50];
char s2[50];
printf("enter two strings :");
gets(s1);
gets(s2);
int result = strcmp(s1,s2);

printf("%d",result);
    return 0;
}
// if the ascii value of the first character of s1 is greater than the first character of s2 then returns >0 vlaue
// if they are equal then 0
// if ascii value of first charcter of s1 is < s2 then returns <0 value