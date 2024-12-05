#include<stdio.h>
int main(){
    int n;
    printf("enter the number \n:");
    scanf("%d",&n);

    int array[10];
    printf(" input your elements:\n");
    for(int i=0;i<=n;i++)scanf("%d",&array[i]);
    printf("the inputed elements are:");
for(int i=0;i<=n;i++)printf("%d",array[i]);
    return 0;
}