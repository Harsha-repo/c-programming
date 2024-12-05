#include<stdio.h>
int main(){

int temp;
int  a=5;
int b=3;
int *ptr1 = &a;
int *ptr2 = &b;

temp=*ptr1;
*ptr1 = *ptr2;
*ptr2 = temp;
printf("%d   %d ",a,b);



    return 0;
}