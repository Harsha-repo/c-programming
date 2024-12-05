
#include<stdio.h>
int main(){

int n,i,j;
printf("enter a numbber ");
scanf("%d",&n);

for(i=1;i<=n;i++){

    for(int k=n;k>=0;k--){
        printf(" ");
    }
    for(j=1;j<=n-i;j++){      
        printf("%d  ",j);
    }

printf("\n");
}

    return 0;
}