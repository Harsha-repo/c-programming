
#include<stdio.h>
int main(){

int n,i,j;
printf("enter a numbber ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    for(int k=0;k<n-i;k++){
        printf(" ");
    }
for(j=1;j<=i;j++){      // check with j=i
    printf("%d  ",j);
}
printf("\n");
}

    return 0;
}