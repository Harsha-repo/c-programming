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


 traverselist(head);



    return 0;
}

void traverselist(struct node *p){
    
    while(p!=NULL){

        printf("\n%d    %p",p->data,p->link);
        p = p->link;


    }   
}