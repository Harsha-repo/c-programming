#include<stdio.h>
void swaping(int *x,int *y){

int temp;
temp = *x;
*x=*y;
*y=temp;



}

int main(){

int a=9,b=2;
//
swaping(&a,&b);
printf("the swaped numbers are : %d%d",a,b);
    return 0;
}