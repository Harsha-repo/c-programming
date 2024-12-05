#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
} *root = NULL, *temp = NULL, *new = NULL;

void insert(struct node *temp)
{
    if (new->data < temp->data)
    {
        if (temp->left == NULL)
            temp->left = new;
        else
            insert(temp->left);
    }

    
    if (new->data > temp->data)
    {
        if (temp->right == NULL)
            temp->right = new;
        else
            insert(temp->right);
    }
}
void createTree()
{
    int value, n;
    printf("Enter the number of nodes to add : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value : ");
        scanf("%d", &value);
        new = (struct node *)malloc(sizeof(struct node));
        new->data = value;
        new->left = new->right = NULL;
        if(!root)
            root = new;
        else
            insert(root);
    }
}
void inorder(struct node *temp)
{
    if (temp)
    {
        inorder(temp->left);
        printf("%d\t", temp->data);
        inorder(temp->right);
    }
}
void preorder(struct node *temp)
{
    if (temp)
    {
        printf("%d\t", temp->data);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void postorder(struct node *temp)
{
    if (temp)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t", temp->data);
    }
}
void display()
{
    printf("\nInorder : ");
    inorder(root);
    printf("\nPreorder : ");
    preorder(root);
    printf("\nPostorder : ");
    postorder(root);
}
void searchNode()
{
    int key;
    printf("Enter the key value to search : ");
    scanf("%d", &key);
    temp = root;
    while (temp)
    {
        if (temp->data == key)
        {
            printf("%d is the present in tree.", key);
            break;
        }
        else if (temp->data > key)
            temp = temp->left;
        else if (temp->data < key)
            temp = temp->right;
        else   
            printf("Element is not present.");
    }
}
void main()
{
    int n, choice;
    while (1)
    {
        printf("\n1. Create Tree\n2. Display\n3. Search\n4. Exit\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createTree();
            break;
        case 2:
            display();
            break;
        case 3:
            searchNode();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid Choice");
            break;
        }
    }
}