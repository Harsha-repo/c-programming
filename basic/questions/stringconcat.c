// we try to concat the strings without using built in functions

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char s1[20],s2[20];
printf("enter first string :");
gets(s1);
printf("enter second string :");
gets(s2);
int size = strlen(s1)+strlen(s2);

char *s = calloc(size,sizeof(char));

for(int i=0;i<strlen(s1);i++)
s[i]=s1[i];
for(int i=0;i<=strlen(s2);i++)
s[strlen(s1)+i]=s2[i];

puts(s);
    return 0;
}


// in this programme we are trying to concatenate the two strings s1 and s2 and now we store the conctenated one 
// in the other string s  where it is given a dynamic memory allocation 
// because we are unable allocate the perfectly the memory for a concatenated string 
// using pointers dyanmic memory is allocated to store the new merged string
// strcpy  is the function that helps string cpy form one to other 
// strrev  is used to reverse the string 
// collac is the dynamic memeory allocation key that intakes (size , size of datatype ) as the arguments 