// #include<stdio.h>
// #include<stdlib.h>
// #define n 5

// int cqueue[n];
// int front = -1;
// int rear = -1;

// int push();
// int pop();
// int display();

// int main(){
//     while(1){
// printf("\n 1. push 2. pop 3. display");
// int choice;
// printf("enter the choice:");
// scanf("%d",&choice);

// switch(choice){

// case 1:
// push();
// break;

// case 2:
// pop();
// break;

// case 3:
// display();
// break;

// case 4:
// exit(0);
// break;

// }
// }
//     return 0;

// }

// int push(){

//     if(rear==n-1 && front ==0 || rear==(front-1)%(n-1)){    // two conditions of circular queue overflow
//         printf("overflow");

//     }

//     else if(front==-1 && rear==-1){
//         front = 0;
//         rear = 0;
//          int item;
//         printf("\nenter the item into queue :");
//         scanf("%d",&item);
//         cqueue[rear]= item;
//         printf("pushed to cq :%d at %d",cqueue[rear],rear);
        
//     }

//     else if(rear==n-1&& front!=0){        // when rear reaches the max size again bring it to first position if front had moved forward becased
//         rear = 0;                         // gap is been created durin pops ,as front moved forward
//         int item;
//         printf("\nenter the item into queue :");

//         scanf("%d",&item);
//         cqueue[rear]=item;
        
//     }

//     else{
        
//         int item;
//         printf("\nenter the item into queue :");
//         scanf("%d",&item);
//         rear = (rear+1)%n;
//         cqueue[rear]=item;
//         printf("pushed to cq :%d  at %d",cqueue[rear],rear);

//     }
// }

// int pop(){

//     if(front==-1){
//         printf("\nqueue underflow");

//     }

// else if(front==rear){
//     printf("poppped:%d",cqueue[front]);
//     printf("\nno more elements to pop  , underflow");
//     front=-1;
//     printf("now the front is :%d",front);
// }

  
//     else{
    
//        //printf("\nfornt:%d",front);
//         printf("popped:%d",cqueue[front]);
//         front=(front+1)%n;
        
//     }
// }

// int display(){
//     if(front == -1){              // under flow condition 
//         printf("underflow");
//     }
    
//     else if(rear>=front){               // we need to print from front to rear whenever the rear is greater than front
//         for(int i=front;i<=rear;i++){
//             printf("\n%d ",cqueue[i]);
//             // front = (front+1)%n;
//         }
//     }
//     else{}
//         for(int i=front;i<n;i++){              // from front pointer to max size 
//             printf("\n%d",cqueue[i]);
//         }
//         for(int i=0;i<=rear;i++){            // from zero to rear pointer  , so that all elements got covered 
//             printf("\n%d",cqueue[i]);
//         }
//     }


#include<stdio.h>
#include<stdlib.h>
#define n 5
int cq[n];
int front = -1,rear=-1;

void push(){
    if(front==rear+1%n){

        printf("overflow");

        
    }

    else{
        if(front==-1)
        front++;
    rear = (rear+1)%n;
    printf("\nenter the value to the queue:");
    scanf(" %d",&cq[rear]);

    }
}

void pop(){

    if(rear==-1){
        printf("underflow");
    }
    else{
        if(front==rear)
        front = rear = -1;

        else{

            front = (front+1)%n;
           printf("%d",cq[fornt]);
           
        }

    }
}

void display(){
    if(front==-1){
        printf("empty");
    }
    else{
        int i=0;
        for(i=front;i!=rear;i=(i+1)%n)
        printf("%d ",cq[i]);
    printf("%d",cq[i]);

    }
}

int main(){

    while(1){
        printf("1.")
    }
}