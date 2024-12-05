#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {

    int data;
    struct node *link;

}*head = NULL;

int create_list();
void display_list();
void insert_start();
void insert_last();
void delete_start();
void delete_end();
void insert_specific_pos();

// void traverselist(struct node *p);

int main(){
    int choice;
while(true){
printf("\n1.create linked list     2 display  3.insertion_start  4 . insertion_last   5.delete_start  6.delete_end  7 insert_specific position");
printf("\nenter your choice ");
scanf("%d",&choice);
 int n;
switch(choice){
    

    case 1:
    printf("\nenter the number of linked lists to be created :");
    scanf("%d",&n);
    create_list(n);

    break;

    case 2:
    display_list(head);
    break;
    // case 2 :
    // traverselist(head);
    // break;

    case 3:
      insert_start();
    break;

    case 4 :
    insert_last();
    break;

    case 5:
    delete_start();
    break;

    case 6 :
    delete_end();
    break;

    case 7 :
    insert_specific_pos();
    break;

}
}
}



int  create_list(int n){

    struct node *new;
    new = malloc(sizeof(struct node));
    printf("\nenter the  data value ");
    int data;
    scanf("%d",&data);
    new->data=data;
    new->link = NULL;
    
    head=new;
printf("\n%p",head);

    // creating a new node means we are addinga another node to the existing node so we create new node 'using struct node'
// and then we run it for multiple times so that it would return us the same node multiple times and we assign its data multiple times 
// and then we link them each other as shown in the below code snippet
for(int i=2;i<=n;i++){
struct node *new_node;
new_node = malloc(sizeof(struct node));
int newvalue;
printf("\nenter new data value");
scanf("%d",&newvalue);
new_node->data=newvalue;
new_node->link = NULL;
new->link = new_node;
new=new_node;


}
return 0;
}


void display_list(){
  struct node *temp;
  temp=head;
   while(temp!=NULL){
    
    printf("\n%d   %p",temp->data,temp->link);
    temp=temp->link;

   }


}

// void traverselist(struct node *p){
    
//     while(p!=NULL){

//         printf("\n%d    %p",p->data,p->link);
//         p = p->link;


//     }   
// }

void insert_start(){

    //inserting at the first position of the linked list
    struct node *new,*next;
next = head;
    printf("%p",head);
    int data;
    new = malloc(sizeof(struct node));
    printf("enter the data for newly inserting node:");
    scanf("%d",&data);
    head = new;
    new->data = data;
    new->link = next;
    
}

void insert_last(){

    struct node *new ,*temp,*prev;
    temp=head;
    while(temp!=NULL){
        prev = temp;
        temp=temp->link;

        if(temp==NULL){
            new = malloc(sizeof(struct node));
            int data;
            printf("enter the value to the inserting node:");
            scanf("%d",&data);
            prev->link = new;
            new->data = data;
            new->link =NULL;
        }
    }
}

void delete_start(){
struct node *next , *temp;
    next = head;
    printf("%p\n",next);
   
   
    temp = next->link;
    head = temp;
   free(next);
    printf("%p",temp);
    
    
    

}

void delete_end(){
    struct node *temp,*prev,*preprev;
    temp = head;
   

    while(temp!=NULL){
        preprev = prev; // preprev is the previous list pointing pointer and thus succeafully deletion is carried 
         prev = temp;
         
        temp=temp->link;
        if(temp==NULL){
            printf("%p\n",preprev);
            printf("%p\n",prev);
            printf("%p",temp);
            free(prev);
            preprev->link = NULL;
           
            

        }
    }
    printf("sucessfully freed :");
}


void insert_specific_pos(){
    // to this we traverse the list and find the key  and then insert in between ,for ex lets say in btw 20 and 30
    struct node *new,*prev,*temp,*next;
    int search1,search2 , value;
    printf("\nenter the positions where to insert the list :");
    scanf("%d ",&search1);
    scanf("%d",&search2);

    temp  = head ;
    while(temp!=NULL){
       
        prev = temp;
        temp = temp->link;

        if(prev->data=search1 && temp->data==search2){
            //printf("%d\n",temp->data);
            // printf("%d\n",prev->data);
            // printf("%d\n",temp->data);
            new = malloc(sizeof(struct node));
            printf("\nenter the new value:");
            scanf("%d",&value);
            // new->data = value;
            // temp->link = new;
            // new->link = next;

            //next= temp->link;

            printf("%p   %d\n",prev,prev->data);
            printf("%p   %d\n",temp,temp->data);
            temp->link = new;
            new->data = value;
            new->link = temp->link;

                                     
            // prev->link= new;
            // new->data = value;
            // new->link = temp;
            //printf("%p\n",next);

            //printf("%d",next->data);

            // new->data = data;
            // temp->link=new;
           
            // new->link = next;
        }
        

    }
printf("successfully updated ");
}