#include<stdio.h>
int main(){
    int n,fact=1;
    printf("entr the number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){

        fact=fact*i;
    }
printf("the result is %d",fact);
    return 0;

}