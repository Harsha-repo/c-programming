#include<stdio.h>
#include<stdlib.h>
#define n 5

int cqueue[n];
int front = -1;
int rear = -1;

int push();
int pop();
int display();

int main(){
    while(1){
printf("\n 1. push 2. pop 3. display");
int choice;
printf("enter the choice:");
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
exit(0);
break;

}
}
    return 0;

}

int push(){

    if(rear==n-1 && front ==0 || rear==(front-1)%(n-1)){
        printf("overflow");

    }

    else if(front==-1 && rear==-1){
        front = 0;
        rear = 0;
         int item;
        printf("\nenter the item into queue :");
        scanf("%d",&item);
        cqueue[rear]= item;
        printf("pushed to cq :%d at %d",cqueue[rear],rear);
        
    }
    else if(rear==n-1&& front!=0){
        rear = 0;
        int item;
        printf("\nenter the item into queue :");
        scanf("%d",&item);
        cqueue[rear]=item;
    }
    else{
        
        int item;
        printf("\nenter the item into queue :");
        scanf("%d",&item);
        rear = (rear+1)%n;
        cqueue[rear]=item;
        printf("pushed to cq :%d  at %d",cqueue[rear],rear);

    }
}

int pop(){

    if(front==-1){
        printf("\nqueue underflow");

    }

else if(front==rear){
    printf("poppped:%d",cqueue[front]);
    printf("\nno more elements to pop  , underflow");
    front=-1;
    printf("now the front is :%d",front);
}
    
    
    else{
    
       //printf("\nfornt:%d",front);
        printf("popped:%d",cqueue[front]);
        front=(front+1)%n;
        
    }
}

int display(){
    if(front == -1){
        printf("underflow");
     

    }
    
    else if(rear>=front){
        for(int i=front;i<=rear;i++){
            printf("\n%d ",cqueue[i]);
            // front = (front+1)%n;
        }
    }
    else{
        for(int i=front;i<n;i++){
            printf("\n%d",cqueue[i]);
        }
        for(int i=0;i<=rear;i++){
            printf("\n%d",cqueue[i]);
        }
    }
}
