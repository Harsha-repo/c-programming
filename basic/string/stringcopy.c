#include<stdio.h>
#include<string.h>
int main(){

char s1[50];
char s2[50];
printf("enter the two strings :");
gets(s1);
gets(s2);
printf("the two strings are :");
puts(s1);
puts(s2);
//string copy is the method where the string s2 is compied into the s1 and stores in s1 
// the string which is in s1 gets converted to s2 so the s1 is erased
strcpy(s1,s2);
puts(s1);


    return 0;
}