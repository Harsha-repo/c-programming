#include<stdio.h>
#include<string.h>
int main(){

char str[]="maa is the best";
//printf("%s",str);
gets(str);
//scanf("%s",str);// no and symbol is  is written here 
// also it only reads the first word before space
printf("%s",str);
    return 0;

}