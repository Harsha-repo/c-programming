#include<stdio.h>
int main(){

    int n,i,c;
    printf("enter a number");
    scanf("%d",&n);
     c=0;
    while(n!=0){
        n = n/10;
        c++;
    }
    printf("the no. of digits are : %d",c);

    return 0;
}