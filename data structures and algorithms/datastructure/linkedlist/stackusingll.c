#include<stdio.h>
#include<stdlib.h>

int top = -1;

struct node {

    int data;
    struct node *link;

}*head = NULL,*rear=NULL;

void create();
void pop();
void display();

int main(){
int choice;
while(1){
    
    printf("\n1 push   2 pop   3. display");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        create();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

    }
}

    return 0;
}

void create(){
    struct node *new;
new = malloc(sizeof(struct node));

if(!rear){
rear = new;
head = new;
}

int data;
printf("enter the data:");
scanf("%d",&data);

rear->link = new;
new->data = data;
rear = new;
rear->link = NULL;
printf("%p",head);
printf("pushed : %d  , rear : %p",rear->data,rear->link);

}

void pop(){
    if(!head){
        printf("empty");

    }
    
    struct node * temp1,*temp2;
    temp1 = rear;

    for(temp2 = head ; temp2->link==rear;temp2=temp2->link){
        rear = temp2;

    }

    rear->link = NULL;

    free(temp1);
    
}




void display(){
    struct node *temp;
    temp = head;

    while(temp!=NULL){
        printf("\n%d",temp->data);
        temp = temp->link;
    
    }

}