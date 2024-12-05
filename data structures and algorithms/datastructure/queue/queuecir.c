//using circular queue 

#include<stdio.h>
#include<stdbool.h>
#define N 5
int front =-1;
int rear = -1;
int queue[N];
int item;

int addqueue();
 int delqueue();
 int displayqueue();

int main(){
int choice;
while(true){
printf("\n1.add    2.delete     3.display queue");
printf("\nenter the choice:");
scanf("%d",&choice);
switch(choice){

    case 1 :
    
     printf("\nenter the elements");
        scanf("%d",&item);
    addqueue();
    break;

    case 2:
    delqueue();
    break;


    case 3:
    displayqueue();
    break;

    default:
    printf("\nenter the above choice bolimagane");

}

}


    return 0;
}


int addqueue(){
    
    if(front==-1&&rear==-1){
        front = 0;
        rear = 0;
       
        queue[rear]=item;
        printf("\nenterd item %d  in  %d ",item,rear);
        printf("\nfront is %d",front);
        
        
    }

    else if((rear+1)%N==front){
        printf("the queue is full and no more elements can be added ");

    }

    else{

        rear = (rear+1)%N;
        queue[rear]=item;
        printf("enterd %d in %d",item,rear);
        printf("\nfront is %d",front);
        
    }
}

int delqueue(){

    if (front == -1){
        printf("the stack is empty ");

    }

    else if(front == rear){
        printf("%d",queue[front]);
        front = -1;
        rear=-1;
        printf("\n fornt is %d",front);
        printf("\n rear is  %d",rear);
        printf("\nno more deletions possible beacuse the queue is empty now ");

    }

    else{
        printf("deleted %d",queue[front]);
        front  = (front+1)%N;
        printf("\nfront is %d",front);

    }
}

    int displayqueue(){
        if(front ==-1){
            printf("\nthe queue is empty");
        }
        else{
            printf("\n the queue is :");
            for(int i=front;i<=rear;i++){
                printf(" %d ", queue[i]);
            }
        }

    }



