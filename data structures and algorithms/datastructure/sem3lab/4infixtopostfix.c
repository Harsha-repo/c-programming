// Develop a Program in C for converting an Infix Expression to Postfix Expression. 
// Program should support for both parenthesized and free parenthesized
// expressions with the operators: +, -, *, /, % (Remainder), ^ (Power) and 
// alphanumeric operands

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int top=-1;
int stack[20];

// char push(char x);
// char pop();
// int priority(char x);

void push(char c){
    stack[++top]=c;
}

char pop(){
    if(top==-1){
    return -1;}
    else{
    return stack[top--];}
}

int  priority(char x){        // because it is returning integer the type is also changed to integer
    if(x=='+'||x=='-')
    return 1;
    if(x=='*'||x=='/')
    return 2;
    if(x=='^')
    return 3;

return 0;
}


void main(){
    char postfix[20];
char *e;
char x;
printf("Enter the postfix expression :");
scanf("%s",postfix);
e=postfix;

while(*e!='\0'){

    if(isalnum(*e)){
        printf("%c",*e);
    }

    else if(*e=='('){
        push(*e);
    }

    else if(*e==')'){
        // x=pop();
        while((x=pop())!='('){
            printf("%c",x);
        }
    }

    else{
        while(priority(stack[top]>=priority(*e)))
        printf("%c",pop());
    push(*e);
    }

    e++;
}

while(top!=-1)
{
    printf("%c",pop());
}

}