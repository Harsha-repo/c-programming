#include<stdio.h>
int main(){
int a=5;
int b=5;
int *x=&a;
printf("%p\n%p\n%p\n",&a,&b,x);// used to print the adress of the number variable in memory
printf("%p\n",&x); //khudh ka address r
printf("%d",*x);// the value stored inside the box where the adress points


    return 0;
}