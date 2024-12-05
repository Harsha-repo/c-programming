#include<stdio.h>
int main(){

int n ,rem,rev=0;
int temp;

printf("enter a number;");
scanf("%d",&n);
temp = n;

while(n!=0){
    rem = n%10;
    rev = rev*10 + rem;
    n=n/10;
    
}
printf("the reversed number is :%d\n",rev);

if (rev==temp){
    printf("the number is palindrome");

}
else{
    printf("not palindrome");
}
    return 0;
}