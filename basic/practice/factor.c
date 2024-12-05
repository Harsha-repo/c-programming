#include<stdio.h>
int main(){

    int i , n ,fact=1;
    printf("enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){                // to factorial the i value starts from 1

        fact = fact*i;
        

    }
printf("%d",fact);

    return 0 ;
}