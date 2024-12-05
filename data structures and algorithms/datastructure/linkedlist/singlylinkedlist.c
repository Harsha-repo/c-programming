#include<stdio.h>
#include<stdlib.h>

struct node {

    int data;
    struct node *link; 

      // self referential structure
};

int main(){

struct node *new,*start;

// scanf("%d",&start.data);
// printf("%d",start.data);

start = malloc(sizeof(struct node)); // typecast malloc and allocate the memeory for struct node 
start->data = 20;


new= malloc(sizeof(struct node )); // new is storing the a address of the created node 
 
 // typecast malloc and allocate the memeory for struct node 
new->data=30;
new->link =NULL;
start->link = new ;



// start is a node having data 20 and new is a node having the data 30  both are two different nodes now
// new is storing the pointer of 2nd node  and start is stroing the pointer of the first node ;

printf("%d   %p",start->data ,start->link );
printf("\n%d   %p ",new->data,new->link);



    return 0;
}