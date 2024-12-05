#include<stdio.h>
#include<ctype.h>
int stack[20];                     // using stack fot the evlaution of the postfix exp
int top=-1;                               

void push(int x){
    stack[++top]=x;           // basic push pop opearations
}

int pop(){
    return stack[top--];
}

int main(){
    
    char exp[20];
  
    int n1,n2,n3,num;
    printf("enter the expression:");   // inputing the expression
    scanf("%s",exp);
    int i=0;
    while(exp[i]!='\0')             // traversing till the end of the expression
    {

        if(isdigit(exp[i]))        // checking whether the exp[i] is digit or not if digit push to stack
        {
            num = exp[i]-48;

            push(num);
        }
        else
        {
            n1=pop();                  // if not digit then it should be operator , the stack top2 elements are poppedout in n1 and n2
            n2=pop();
            switch(exp[i]){

                case '+':            // checkin the symbols using switch case , and evalution is done as per the symbol
                n3=n1+n2;
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
            push(n3);                    //ans is then pushed into stack
        }
        i++;
    }

    printf("\nthe result of evaluation is %d",pop());         // atlast ans left in stack is poped out
    return 0;

}