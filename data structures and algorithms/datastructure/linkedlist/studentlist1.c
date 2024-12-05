#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct node {

    
    char name[20] ;
    char roll[20];
    char program[20];
    struct node *link;
    char pno[20];
    

}*front,*rear,*newnode;

int n,i=0;

void insert(int choice){

    newnode = malloc(sizeof(struct node));

    printf("\nEnter the name of the student:");
    scanf("%s",newnode->name);

    printf("\nenter the roll number :");
    scanf("%s",newnode->roll);

    printf("\n enter the program :");
    scanf("%s",newnode->program);

    printf("enter the phone number:");
    scanf("%s",newnode->pno);


    if(!rear){
        front = rear = newnode;

    }
    else{

        if(choice){
            rear->link = newnode;
            rear = newnode;
        }
        else{
            newnode->link = front;
            front = newnode;
        }
    }
}

void delete(int choice){
    struct node *temp,*temp2;
    

    if(!front)
    {
        printf("\nempty");
    }
 else{
    
    if(choice)
    {
      temp=rear;
      for(temp2=front;temp2->link==rear;temp2=temp2->link)
       {
          rear = temp2;
       }
       rear->link=NULL;
    }
    else
    {
        temp=front;
        front = front->link;
    }
 }
free(temp);

 
}

void display(){
    struct node *temp;
    temp = front;
    while(temp!=NULL){
        printf("\nNAME :%s  ROLL: %s   PROGRAM :%s    PHONE:  %s ",temp->name,temp->roll,temp->program,temp->pno);
        temp=temp->link;
    }
}

void main(){
    int choice;
    while(true){
        
        printf("\n1.insert_front  2.insert_rear  3.delete_front 4.delete_rear  5.display\n enter your choice");
        scanf("%d",&choice);

        switch(choice){

        case 1:insert(0);break;
        case 2:delete(0);break;
        case 3:insert(1);break;
        case 4:delete(1);break;
        case 5:display(1);break;
        case 6:exit(0);break;
        }
    }
}
