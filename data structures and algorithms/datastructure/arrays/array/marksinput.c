#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of students \n:");
    scanf("%d",&n);

    int marks[n];
    printf(" input your students marks:\n");
    for(int i=0;i<=n;i++)scanf("%d",&marks[i]);
    printf("the inputed student marks are:");
for(int i=0;i<=n;i++){

    if(marks[i]<35) printf("%d,%d\n" ,i,marks[i]);



}
    return 0;
}