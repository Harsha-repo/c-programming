#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
struct node{
    char usn[20],name[20],prog[20],pno[20];
    int sem;
    struct node *link;

}*front,*rear,*newnode;

int n,i=0;

void insert(int choice){

    newnode=malloc(sizeof(struct node));
    
    printf("enter usn :");
    scanf("%s",newnode->usn);

    printf("\nenter name :");
    scanf(" %s",newnode->name);

    printf("\nenter program :");
    scanf(" %s",newnode->prog);

    printf("\nenter phone no :");
    scanf(" %s",newnode->pno);

    printf("\nenter semester :");
    scanf("%d",&newnode->sem);

    if(!rear){
        front = rear = newnode;
    }
    else{
        if(choice){
            rear->link = newnode;
            rear = newnode;

        }
        else{
            newnode->link= front;
            front = newnode;
        }
    }
}
void delete(int choice){
    struct node *temp,*temp2;
    if(!front){
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
            rear->link = NULL;

        }
        else{
            temp=front;
            front=front->link;
        }
    }
    free(temp);
}

void display(){
    // if(!front || !rear){
    //     printf("no element to print everything is empty");
    // }
    struct node *temp;
    int count;
    temp=front;
    while(temp!=NULL){
        printf("\nusn:%s   name:%s  program:%s   phone:%s    semester:%d  ",temp->usn,temp->name,temp->prog,temp->pno,temp->sem);
        temp=temp->link;
    }
}

void main(){
    int choice;
    while(true){
        printf("\n1.insert front  2. delete front   3. insert rear   4. delete rear  5.display  6 exit\n");
        printf("Enter your choice");
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