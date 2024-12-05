// creating the first node of the tree and then a simple linked tree code
#include<stdio.h>
#include<stdlib.h>

struct node
 {
   int data;
   struct node *leftlink;
   struct node *rightlink;


};

struct node *  create(int data)
{
       struct node *new;
    new = malloc(sizeof(struct node));
    new->data = data;
    new->leftlink= NULL;
    new->rightlink= NULL;
    return new;
}

int main()
{

struct node *n = create(1);
struct node *n1= create(2);
struct node *n2 = create(3);
 

n->leftlink = n1;
n->rightlink = n2;

    return 0;
}