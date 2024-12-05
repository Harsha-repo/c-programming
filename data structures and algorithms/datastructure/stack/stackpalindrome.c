// aim : is to check the string is palindrome are not

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define n 10
int stack[n];
int top=-1;
int l=0;
int c;

int push();
int pop();
int display();
int reverse();
int palindromecheck();


void main(){
int res;
int choice;
while(true){
printf("\n");
printf("1.push  2.pop  3.display  4.reverse 5.checkpalindrome\n");
printf("enter the choice :");
scanf("%d",&choice);


switch(choice){

    case 1 :
    push();
    break;

    case 2 :
    // res[l];
    // for(int i=0;i<=l;i++){
    // res[i]=pop();
    // printf("\n%d",res);
    // }
    pop();
    break;
    
    case 3:
    display();
    break;

    case 4:
    reverse();
    break;   

    case 5:
    palindromecheck();
    break; 

    default:
    printf("\nno such choice");

}
}

}

int push(){
if(top==n-1){
    printf("\nstack is full");
}
else{
    printf("enter the value to be pushed:");
    int value;
    scanf("%d",&value);
    top++;
    stack[top] = value;
    printf("\npushed %d",stack[top]);
    }
    l++;
}
 
int reverse(){
    int a[l];
    if(top<0){
        printf("\nstack  is empty");
    }
    else{
       for(int i=0;i<l;i++){
       //printf("\npopped :%d",stack[top]);
       a[i]= stack[top];
       
        top--;
       }
       printf("\nthe reverse of the stack is :");
       for(int i=0;i<l;i++){
       printf("%d",a[i]);
       }
    //    printf("\n");
    //    for(int i=0;i<l;i++)
    //    printf("%d",stack[i]);
    }
}

int pop(){
    if(top<0){
        printf("\nstack  is empty");
    }
    else{
        printf("popped:%d",stack[top]);
    }
}

int palindromecheck(){
    for(int i=0;i<l/2;i++){
        if(stack[i]==stack[top-i])
        c=1;
        else
        c=0;
    }
    if(c==1)
        printf("palindrome");
    else
        printf("not palindrome");
    
}

int display(){
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
    }
}


// in stack we are not deleting the element but changing the pointer and then printing value in its address