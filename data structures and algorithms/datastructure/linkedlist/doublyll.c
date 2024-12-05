// creating the empty node of a doubly linked list and having a data inside it , with help of function we add the dll 
// function returns the pointer of new node 
#include<stdio.h>
#include<stdlib.h>

struct node *addnode(struct node *ptr,int data);
struct node {

    struct node *prev;
    int data;
    struct node *next;

}*head=NULL;

int main(){
    
    head = addnode(head,10);
    printf("%p   %d   %p ",head->prev,head->data,head->next);
    
  
    return 0;
}

struct node *addnode(struct node *ptr ,int data){
    struct node *newnode = malloc(sizeof(struct node));
    newnode->prev = head;
    newnode->data = data;
    newnode->next = NULL;
    
    return newnode;

}