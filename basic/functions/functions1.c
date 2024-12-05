#include<stdio.h> 

 int sum(int x , int y ){
 
return x+y;
}

int main(){
int x,y;
printf("enter a number : ");
scanf("%d",&x);
printf("enter a second number :");
scanf("%d",&y);

printf("result of sum is :%d",sum(x,y));
    return 0;
}