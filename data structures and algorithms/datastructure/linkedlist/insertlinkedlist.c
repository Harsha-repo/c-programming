#include<stdio.h>
#include<stdlib.h>

struct node{

   int data;
   struct node *link;

};
void traverselist(struct node *p);



int main(){

struct node *head;
struct node *second;
struct node *third ;

// now memory allocatoins has to be done 

head  = malloc(sizeof(struct node));
second = malloc(sizeof(struct node));
third = malloc(sizeof(struct node));


head -> data = 100;
head -> link = second;

second -> data = 200;
second -> link = third;

third ->data = 300;
third ->link = NULL;

printf("before inserting\n");
 traverselist(head);

// insertion at the beginning
 struct node *new;
 new = malloc(sizeof(struct node));
head->link = new;
new->data  = 150;
new->link = second;

printf("\n\nafter inserting at begginng of the list ");

 traverselist(head);
printf("\n%p",new->link);
printf("\n%p",new->link->link);

// insertion at the end of list;
struct node *new1;
new1 = malloc(sizeof(struct node));
new1->data = 400;

struct node *temp = head;
while(temp!=NULL){
    temp = temp->link;
   
    if(temp==NULL){
        temp=new1;
        new1->link = NULL;
     
    }
  
}
printf("\n%d",new->data);
printf("\n\nafter inserting at after last node");
 traverselist(head);


    return 0;
}

void traverselist(struct node *p){
    
    while(p!=NULL){

        printf("\n%d    %p",p->data,p->link);
        p = p->link;s


    }   
}


// void insertend(struct node *p){
//     struct node temp = head;
//     while(temp!=NULL){
//         temp = temp->link;
   
//     if(temp==NULL){
//         temp->link=new1;
//         new1->link = NULL;
     
//     }
//     }
// }

