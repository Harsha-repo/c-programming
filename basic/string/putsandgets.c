#include<stdio.h>
int main(){
char str1[50]; // declaration of array  and it cannot be done without size 
char str[]= "my name is rama";
puts(str); // prints the str statement which is already initiaized and is printed
puts("enter any string"); 
gets(str1);// inputs the string for str1 which is not initialized 
puts(str1);// prints the str1 string in newline
    return 0;
}