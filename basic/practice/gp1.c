
// 3,12,48.....
#include<stdio.h>
#include<math.h>
int main(){
int a=3,n;
printf("entr the number ");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    printf("%d ",a);
    a=a*4;
}


    return 0;
}