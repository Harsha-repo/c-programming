 // adddding a new dll at the beginning of the head we push the first node step forward and add new node at its place 
 // ensuring that head points the new node as if it is the stating node

#include<stdio.h>
#include<stdlib.h>

struct node *addnode(struct node *ptr,int data);
struct node *addBeg(struct node *ptr,int data);
struct node *addEnd(struct node *ptr,int data);
struct node {

    struct node *prev;
    int data;
    struct node *next;

}*head=NULL;

int main(){
    
    head = addnode(head,10);
     addBeg(head,25);
     addEnd(head,45);

    
    struct node *temp;
    temp=head;
    while(temp!=NULL){
        printf("%p   %d    %p\n",temp->prev,temp->data,temp->next);
        temp=temp->next;
    }
  
    return 0;
}

struct node *addnode(struct node *ptr ,int data){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->prev = head;
    newnode->data = data;
    newnode->next = NULL;
    
    return newnode;

}      

struct node *addBeg(struct node *ptr , int data){
    struct node *new =malloc(sizeof(struct node));
    new->prev = NULL;
    new->data = 25;
    new->next = NULL;
    new->prev = head;
    head->prev = new;
    head = new ;
    return head;
    

}        
struct node *addEnd(struct node *ptr , int data){

    struct node *temp,*new;
    temp=head;
    while(temp->next!=NULL){
        
        new=malloc(sizeof(struct node));
        temp->next = new;
        new->prev = temp;
        new->data = data;
        new->next = NULL;
         return new;
    

    }

}


                                     
                                     