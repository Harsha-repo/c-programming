// Design, Develop and Implement a menu driven Program in C for the following 
// operations on STACK of Integers (Array Implementation of Stack with maximum 
// size MAX)
// a. Push an Element on to Stack
// b. Pop an Element from Stack
// c.Demonstrate Overflow and Underflow situations on Stack
// d. Display the status of Stack
// e. Exit
// Support the program with appropriate functions for each of the above operations

#include<stdio.h>
#include<stdlib.h>
# define N 10

int c=0;
void push();
void pop();
void display();
void palindrome();

int top=-1;
int stack[N];

int main(){

int choice;
while(1){
printf("\n1.push 2.pop   3. display  4.palidrome \n enter your choice:");
scanf("%d",&choice);

switch(choice){
    case 1 :
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


    default:
    printf("enter the correct choice");


}
}
    return 0;


}
void  push(){

if(top==N-1){

    printf("\noverflow");

}
else{

    int value;

    printf("\nenter the value to the stack");
    scanf("%d",&value);

    stack[++top]=value;
    printf("pushed  %d  to index %d",value,top);

}
}

void pop(){
    if(top==-1){
        printf("underflow");

    }
    else{
        printf("popped %d",stack[top]);
        top--;
    }
}

void display(){
    if(top==-1){
        printf("underlfow no elements to display");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d",stack[i]);

        }
    }
}

void palindrome(){

    for(int i=0;i<top/2;i++){
          if(stack[top-i]==stack[i])
          c=1;   
    }
    

    if(c==1){
        printf("its a palindrome");
    }
    else{
        printf("not a palindrome");
    }

}