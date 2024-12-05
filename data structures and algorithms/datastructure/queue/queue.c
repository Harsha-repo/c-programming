#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define maxsize 5
int que[maxsize];
int front =-1;
int rear = -1;
// funciton declaration 
int enqueue();
int delque();
int display();


// enqueue  entering the elements to the queue

int enqueue(){

    if(rear==maxsize-1){
     printf("the que is full");   
    }

    else{
        front =0;
        rear = rear+1;
        int value;
        printf("\nenter the value to into que at %d ,max size is  %d:",rear,maxsize);
        scanf( "%d",&value);

        que[rear]=value;
        
       
    }
}

int delque(){
    if(front ==-1 && rear ==-1 ){
        printf("the queue is empty ");
    }
    else if (front == maxsize-1){
        printf("the que reached to end %d",que[front]);
       
    }
    else{
        int  x = que[front];
        printf("deleted %d from queue",x);
        front ++;
    }

}

int display(){
    if(rear==-1 || front == maxsize){
        printf("the queue is  empty no elements to display ");
    }
    else{
    printf("the elements in the array are :");
    for(int i=front;i<=rear;i++){
        printf("%d",que[i]);
    }
    }
}

int main(){

int choice;
while(true){
// printf("\n%d",sizeof(que));
printf("\n1. enqueue  2.delque   3. display ");
printf("\nenter your choice :");
scanf("%d",&choice);



    switch(choice){

        case 1 :
        enqueue();
        break;

        case 2 :
        delque();
        break;

        case 3:
        display();
        break;

    }
}
    return 0;
}
