// using recursion do the fibo sequence

#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n){
    int sum = 0;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
 return (fibonacci(n-1)+fibonacci(n-2));

}

int main(){

    int n = 6;
    printf("%d",fibonacci(n));
   


    return 0;
}