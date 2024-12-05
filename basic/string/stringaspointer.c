#include<stdio.h>
#include<string.h>
int main (){

char str[]="harsha and ";
char *ptr = str;//it is storing the  initial array adress and then that helps to fetch the array elements
int i=0;
while(*ptr!='\0'){

    printf("%c \n",*ptr);
    ptr++;//poniter are having only 1 bit differnce btw their corresponding memories
    i++;
}
    return 0;
}