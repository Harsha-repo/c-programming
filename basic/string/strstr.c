#include<stdio.h>
#include<string.h>
int main(){
printf("enter the string:");
char s1[50];
gets(s1);
printf("enter the pattern :");
char pat[50];
gets(pat);
char *p= strstr(s1,pat);
if (p){
printf("%s",p);


}
else{
    printf("no string found");
}
    return 0;
}