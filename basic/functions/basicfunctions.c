#include<stdio.h>
int add(int x ,int y){

return x+y;
}

int main(){
    
int a,b,sum;
printf("enter two numbers :");
scanf("%d%d",&a,&b);
sum=add(a,b);
printf("the sum is %d",sum);


    return 0;

}