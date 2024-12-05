#include<stdio.h>
int main(){
int n,i,a,j;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++){
     a = 1;
for(j=1;j<=i;j++){
    int d= a+64;
    // character form conversion using ascii values 
    char ch=(char)d;
    if (i%2==0)
    printf("%c ",ch);
    else 
    printf("%d ",j);
    a++;
    }




printf("\n");
}
    return 0;
}