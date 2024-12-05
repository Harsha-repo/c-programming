#include<stdio.h>
int main(){

int n,c=1;
printf("enter a number:");
scanf("%d",&n);
for(int i=2;i<=n;i++){
    if(n%i==0)
    c++;
}
if(c==2)
printf("the number is prime");
else
printf("the number is composite");

    return 0;
}