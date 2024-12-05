#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
char s[100];
char s1[100];
printf("enter a string :");
gets(s);
int c=0;

printf("the vowela are :");
for(int i=0;i<=strlen(s);i++){

  
    switch (toupper(s[i])){           // in this switch case you can iterarte over the string 
        case 'A':                     // by checkiing the cases that  are required and vowels can be found
        case 'E':                     // normally switch case works as if else it also work as search where u iterate without
        case 'I':                     // break and if condition is martched we can break 
        case 'O':                     // here count is getting increased if we match with the  condition
        case 'U':
        c++;
       printf("%c",s[i]);
    }
   
}
printf("\n");

printf(" the number of vowels in the sentence:%d",c);


    return 0;
}