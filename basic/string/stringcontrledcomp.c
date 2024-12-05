#include<stdio.h>
#include<string.h>

int main(){

char s1[50];
char s2[50];
printf("enter the two strins that are to be compared:");
gets(s1);
gets(s2);
int n = strncmp(s1,s2,5);
printf("%d",n);

    return 0;
}
// the returned value is the difference between the ascii values of the first unmatched character in str1 and str2