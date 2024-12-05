#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int stack[20];
int top=-1;

void push(char c){
    stack[++top]=c;
   
}

char pop(){
    if(top==-1)
    return -1;
    else
    return stack[top--];
}

int priority(char x){

    if(x=='+' || x=='-')
    return 1;
    if(x=='*' || x=='/')
    return 2;
    if(x=='^');
    return 3;
    return 0;
}

int main(){

    char exp[20];
    printf("enter the postfix expression :");
    gets(exp);
    char *e,x;
    e=exp;

    while(*e!='\0'){
        
        
        if(isalnum(*e))
        printf("%c",*e);

        else if(*e=='(')
        push(*e);
        
        else if(*e==')'){
            while((x=pop())!='(')
            printf("%c",x);
        
        }
        else{
            while(priority(stack[top])>=priority(*e))
                printf("%c",pop());
            push(*e);
        }
        e++;

    }
    while(top!=-1){
        printf("%c",pop());
    }
    
return 0;
}