#include<stdio.h>

int main(){
int x,pos,n=10;
int a[n];

for(int i=0;i<n;i++){
    a[i]=i+1;
}
for(int i=0;i<n;i++){
    printf("%d  ",a[i]);
}
printf("\n");

x=12;
pos = 6;
n++;
for(int i=n-1;i>=pos;i--)
    a[i]=a[i-1];

a[pos-1] = x;

for(int i=0;i<n;i++)
printf("%d  ",a[i]);



    return 0;
}