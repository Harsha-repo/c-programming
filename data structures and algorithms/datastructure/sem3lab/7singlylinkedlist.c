// Linked List(SLL) of Student Data with the fields: USN, Name, Programme, Sem,
// PhNo
// a. Create a SLL of N Students Data by using front insertion.
// b. Display the status of SLL and count the number of nodes in it
// c. Perform Insertion / Deletion at End of SLL
// d. Perform Insertion / Deletion at Front of SLL(Demonstration of stack)
// e. Exit

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

struct node{
      
     char usn[20];
     char name[20];
     char prog[20];
     struct node *link;
     char sem[20];
    

}*front,*rear,*newnode;

// void insert(int choice);
// void delete(int choice);
// void display();

void insert(int choice){

    newnode=malloc(sizeof(struct node));

    puts("enter the usn of the student");
    scanf("%s",newnode->usn);

    puts("enter the name of the student");
    scanf("%s",newnode->name);

    puts("enter the program of the student:");
    scanf("%s",newnode->prog);

    puts("enter the semester of the student");
    scanf("%s",newnode->sem);

    if(!rear){
        front=rear=newnode;
    }
    
    else{
        if(choice){
            rear->link = newnode;
            rear=newnode;
        }
        else{
            newnode->link=front;
            front = newnode;
        }
    }

}


void delete(int choice){
    struct node *temp,*temp2;
    if(!front){
        printf("null");
    }

    else{
        if(choice){
            temp=rear;
            for(temp2=front;temp2!=NULL;temp2=temp2->link){
                rear=temp2;
            }
            rear->link =NULL;
        }
        else{
            temp=front;
            front=front->link;
        }
    }

    free(temp);
}

void display(){
    struct node *temp;
    temp=front;

    while(temp!=NULL){
        printf("\n %s   %s   %s   %s ",temp->usn,temp->name,temp->prog,temp->sem);
        temp=temp->link;
    }
}


int main(){
    int choice;
   while(1){

    printf("\n1.insert front  2. insert rear 3.delete front 4. delete rear 5,display 6.exit \n enter your choice:");
    scanf("%d",&choice);

    switch(choice){

        case 1:
        insert(0);
        break;

        case 2:
        insert(1);
        break;

        case 3:
        delete(0);
        break;

        case 4:
        delete(1);
        break;

        case 5:
        display(1);
        break;

        case 6:
        exit(0);
        break;

    }
}
    return 0;
}

