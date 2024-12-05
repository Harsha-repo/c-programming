#include<stdio.h>
int main(){
int n,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++){
    int a = 1;
for(j=1;j<=i;j++){
    int d= a+64;
    // character form conversion using ascii values 
    char ch=(char)d;
    printf("%c ",ch);
    a++;
}
printf("\n");
}
    return 0;
}