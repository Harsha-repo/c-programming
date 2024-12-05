// Develop a menu driven Program in C for the following operations on Binary 
// Search Tree(BST) of Integers .
// a. Create a BST of N Integers: 6, 9, 5, 2, 8, 15, 24, 14, 7, 8, 5, 2
// b. Traverse the BST in Inorder, Preorder and Post Order
// c. Search the BST for a given element (KEY) and report the appropriate message
// d. Exit

#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *right;        // fields of a node in bst with left and right and data parameters 
    struct node *left;
}*root,*temp,*newnode;         // three variables root and temp and newnode


void insert(struct node *temp){
        
        if(newnode->data<temp->data){       //checking the data value and moving to the respective nodes 

            if(temp->left==NULL){
                temp->left=newnode;
            }
            else{
                insert(temp->left);         // else rechecck and insert again
            }
        }

         if(newnode->data>temp->data){

            if(temp->right==NULL){

                temp->right=newnode;
            }
            else{

                insert(temp->right);
            }
        }

}

void create(){
                          // create function creates the nodes and inserts one by one 
    int n;
    printf("enter how many nmuber of nodes you want to create:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
         newnode = malloc(sizeof(struct node));
         int data;
         printf("enter the value to node :");
         scanf("%d",&data);
         newnode->data = data;
         newnode->right = newnode->left = NULL;

         if(!root){
            root = newnode;
         }
         else{
            insert(root);
         }

    }

}

void preorder(struct node *temp){
    if(temp){
        printf("%d",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }

}
void inorder(struct node *temp){
    if(temp){
        D
        preorder(temp->left);
        printf("%d",temp->data);
        preorder(temp->right);
    }

}
void postorder(struct node *temp){
    if(temp){
       
        preorder(temp->left);
        preorder(temp->right);
         printf("%d",temp->data);
    }

}

void display(){
    printf("\npreoreder");
    preorder(root);

    printf("\ninorder");
    inorder(root);

    printf("\npreorder");
    postorder(root);

}

void search(){

    int key;
    printf("enter the key to be searched:");
    scanf("%d",&key);

    while(temp){                      // means untill and unless there is a node we need to run the loops
        if(temp->data==key){
            printf("key is present");

        }
        else if(temp->data>key){
            temp=temp->left;
        }

         else if(temp->data<key){
            temp=temp->right;
        }

        else{
            printf("\nno element found");
        }
    }

}

int main(){
while(1){
    int choice;

    printf("\n1.create  2.display  3.search  4,exit()");
    printf("\nenter your choice:");
    scanf("%d",&choice);

    switch(choice){

        case 1:
        create();
        break;

        case 2:
        display();
        break;

        case 3:
        search();
        break;

        case 4:
        exit(0);
        break;
    }
}
    return 0;
}