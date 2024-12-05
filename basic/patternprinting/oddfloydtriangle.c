
#include<stdio.h>
int main(){

int n,i,j;
printf("enter a numbber ");
scanf("%d",&n);
int a;
for(i=1;i<=n;i++){
for(j=1;j<=i;j++){
    if(a%2!=0)
    printf("  %d  ",a);
    a++;
}
printf("\n");
}

    return 0;
}