#include<stdio.h>
int main(){

int n,i,j;
printf("enter a numbber ");
scanf("%d",&n);

for(i=n;i>0;i--){
for(j=i;j>0;j--){
    printf("%d  ",j);
}
printf("\n");
}

    return 0;
}