#include<stdio.h>
int main(){

    int n,product=1;
    printf("enter the number ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++)scanf("%d",&arr[i]);
    for(int i=0;i<=n;i++)printf("%d",arr[i]);
for(int i=0;i<=n;i++){
     product=product*arr[i];
}
printf("the product is %d",product);
return 0;
}