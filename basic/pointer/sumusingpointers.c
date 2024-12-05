#include<stdio.h>
int main(){
int  n1,n2,nsum=0;
int *p1=&n1;
int *p2=&n2;
int *sum=&nsum;
printf("enter two numbers");
scanf("%d%d",&n1,&n2);
*sum=*p1+*p2;
printf("the sum is : %d",*sum);

    return 0;
}