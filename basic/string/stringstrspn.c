#include<stdio.h>
#include<string.h>

int main(){
char s1[50],s2[50];
printf("enter twp strings:");
gets(s1);
gets(s2);
int p =strspn(s1,s2);
printf("%d",p);
// this returns the length of hte initial substring of s1 that is 
//similar in s2 , by comparing   both the strings entered
//rerturns a number 
    return 0;
}