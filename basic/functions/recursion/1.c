// in this we will see  the basic fatorial programme using recursion

#include<stdio.h>
#include<stdlib.h>

int factorial(int n ){
   int fact;
    if(n==1)
    return 1;
    else
    return n*factorial(n-1);
    
}

int main(){

int n=6;

int fact = factorial(n);
printf("the result is :%d",fact);
    return 0;
}