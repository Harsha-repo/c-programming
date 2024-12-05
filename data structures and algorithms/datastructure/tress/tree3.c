#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left,*right;
}*root=NULL,*temp=NULL,*new=NULL;

void insert(struct node *temp){

    if(new->data<temp->data){

        if(temp->left==NULL){
            temp->left = new;
        }
        else{
            insert(temp->left);
        }
    }

    if(new->data>temp->data){

        if(temp->right==NULL){
            temp->right = new;
        }
        else{
            insert(temp->right);
        }
    }

}

void create(){
int n,value;
    printf("enter the number of tress :");
    scanf("%d",&n);

    for(int i =0;i<n;i++){

        printf("enter the value :");
        scanf("%d",&value);

        new = (struct node *)malloc(sizeof(struct node));
        new->data = value;
        new->left = new->right = NULL;

        if(!root){
            root = new;
        }
        else{
            insert(root);
        }
    }
}


void inorder(struct node *temp){
    if(temp){
        inorder(temp->left);
        printf("%d",temp->data);
        inorder(temp->right);
    }
}

void preorder(struct node *temp){
    if(temp){

        printf("%d",temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}

void postorder(struct node *temp){
    if(temp){

       
        postorder(temp->left);
        postorder(temp->right);
         printf("%d",temp->data);
    }
}

void display(){

    printf("inorder");
    inorder(root);

    printf("\npreorder");
    preorder(root);

    printf("\npostorder");
    postorder(root);
}

void search(){

int key;
    printf("enter the key to be searched :");
    scanf("%d",&key);

    temp = root;
    while(temp){
        if(temp->data==key){
            printf("key is present in the tree");
            break;
        }
        else if(temp->data>key){
            temp= temp->left;
        }
        else if(temp->data<key){
            temp= temp->right;
        }
        else if(temp->data!=key){
            printf("element is not present");
        }    
    }
}

void main(){
    int n,choice;
    while(1){
        printf("\n1. create tree    2.display     3.  search     4. exit\n enter your choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            create();
            break;

            case 2:
            display(root);
            break;

            case 3:
            search();
            break;

            case 4:
            exit(0);
            break;
        }
    }
}