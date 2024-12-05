// traversal of tree 
// 1. preorder traversal 2, inordertraversal  3 . post order traversal 
// lets do pre order traversal
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

void preorder(struct node *root){
if(root!=NULL){
    printf("%d",root->data);
    preorder(root->leftlink);
    preorder(root->rightlink);

   }
}

int main()
{

struct node *n = create(1);
struct node *n1= create(2);
struct node *n2 = create(3);
struct node *n3 = create(4);
struct node  *n4 = create(5);

n->leftlink = n1;
n->rightlink = n2;
n1->leftlink = n3;
n1->rightlink = n4;

preorder(n);
    return 0;
}
