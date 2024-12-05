#include<stdio.h>
#include<stdlib.h>
#define n 5

int stack[n];
int top = -1;


int push();
int pop();
int display();
int palindrome();

int main(){

    while(1){
int choice;
printf("\n1.push   2. pop    3. display   4.palindrome");
scanf("%d",&choice);
switch(choice){

    case 1:
    push();
    break;

    case 2:
    pop();
    break;

    case 3:
    display();
    break;

    case 4:
    palindrome();
    break;

    case 5:
    exit(0);
    break;
}
    }
    return 0;

}

int push(){
    
    if(top==n-1){
        printf("stack overflow");
    }
    else{
    int item;
    printf("enter the item to be pushed:");
    scanf("%d",&item);
    stack[++top]=item;
    
    }

}

int pop(){
    if(top==-1){
        printf("stack underflow");

    }
    else{
        printf("popped :%d",stack[top--]);
        
    }
}

int display(){

    if(top==-1){
        printf("stack underflowflow");

    }
    else{
        printf("\nSTACK ELEMENTS ARE :");
        for(int i=0;i<=top;i++){
            printf("\n%d",stack[i]);
        }
    }
}
int c=0;
int palindrome(){
    for(int i=0;i<top/2;i++){
        if(stack[i]==stack[top-i]){
             c=1;
        }
    }
    
    if(c){
        printf("THE stack is PALINDROME");

    }
    else{
        printf("not a palindrome");
    }
}