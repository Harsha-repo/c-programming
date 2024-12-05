#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int top=-1;
int stack[20];

void push(int value){

    stack[++top]=value;
}

int pop(){

    return stack[top--];
}

int main(){

int n1,n2,n3,num;
char exp[20];


    printf("\nenter the expression :");
    scanf(" %s",exp);
    
    int i=0;
    while(exp[i]!='\0'){
        
        if(isdigit(exp[i]))
        {
            num = exp[i]-48;
            push(num);

        }

        else{
            n1=pop();
            n2=pop();

            switch(exp[i]){

                case '+':
                n3 = n1+n2;
                break;

                case '-':
                n3=n2-n1;
                break;

                case '*':
                n3=n1*n2;
                break;

                case '/':
                n3=n2/n1;
                break;

            
            }
            push(n3);
        }
        i++;
    }
    printf("the result is :%d",pop());

    return 0;
}