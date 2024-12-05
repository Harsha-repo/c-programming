// singly linked list with the data fields USN NAME PROGRAMME , SEM 

// a : create a single linked lsit of n students data by using front insertion ;
// display the status of the linked list and then count the number of nodes 
// perform insertion and deletion at the end of the linked list 
// perform  the insertion deletiona at the front of sll (demstration of the stack )
// exit 


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

struct node {

    char usn[10];
    char name[10];
    char branch[10];
    char sem[10];
    struct node *link;

}*head = NULL;

//function declaration;
void insert_rear();
void insert_front();
void display();



int main(){
int n;
while(true){
printf("\n1.insertion front  2.insert rear  3. delete front  4. delete rear   5.display  ");
int choice;
printf("\nenter your choice :");
scanf("%d",&choice);

switch(choice){

    case 1:
    printf("enter the number of linked list  to be created :");
    scanf("%d",&n);
    int choice = 0;
    insert_front(n,choice);
    break;

    case 2 :
    printf("enter the number of linked lists to be created :");
    scanf("%d",&n);
    insert_rear(n);
    break;

    case 5 :
    display();
    break;

    default:
    printf("\nenter correct choice");
    break;

    }
  }
return 0;
}



void insert_rear(int n,int choice){
    struct node *new ;
    new  = malloc(sizeof(struct node ));
    head = new ;
    printf("enter the usn student 1:");
    scanf("%s",new->usn);
    printf("enter the name student1:");
    scanf("%s",new->name);

    printf("enter the sem student1:");
    scanf("%s",new->sem);
    printf("enter the branch student1:");
    scanf("%s",new->branch);

    for(int i=2;i<=n;i++){

        struct node *newnode;
        newnode = malloc(sizeof(struct node));
        printf("enter the usn of student %d:",i);
        scanf("%s",newnode->usn);

        printf("enter the name student %d:",i);
        scanf("%s",newnode->name);

        printf("enter the sem student %d:",i);
        scanf("%s",newnode->sem);

        printf("enter the branch studnet %d:",i);
        scanf("%s",newnode->branch);
         
        new->link = newnode;
        new = newnode;
        new->link = NULL;


    }
    
}

void insert_front(int n,int choice){

    struct node *new ;
    new  = malloc(sizeof(struct node ));
    head = new ;
    printf("enter the usn student 1:");
    scanf("%s",new->usn);

    printf("enter the name student1:");
    scanf("%s",new->name);

    printf("enter the sem student1:");
    scanf("%s",new->sem);
    
    printf("enter the branch student1:");
    scanf("%s",new->branch);
             
        for(int i=2;i<=n;i++){

        struct node *newnode;

        newnode = malloc(sizeof(struct node));
        
        printf("enter the usn of student %d:",i);
        scanf("%s",newnode->usn);

        printf("enter the name student %d:",i);
        scanf("%s",newnode->name);

        printf("enter the branch studnet %d:",i);
        scanf("%s",newnode->branch);
        

        printf("enter the sem student %d:",i);
        scanf("%s",newnode->sem);

        
        /*actually when we create the link between each of them
        we create first node then make its link NULL then we start
        joining the new nodes from the head and then whose link is 
        updated to point to the new node and so on 
        
        later when you add rear side we see that link is pointed
        to newnodes and also the link is updated to newnode and
        then the link part is also made NULL simultanously 
        
        the problem is we have two NULLs the first NULL will
        never point to the new rear add node  
        and while displaying the nodes it will run only till the first NULL
        
        that is y we use the concept of front and rear which will 
        give the pointer to link them */
        
    
        
        


    }
    
}


void display(){
    int count=0;
    struct node *temp;
    temp = head;
    
    printf(" USN     NAME       SEM       BRANCH  \n");
    // printf(" %d      %s      %d       %s   \n",temp->usn,temp->name,temp->sem,temp->branch);
    while(temp!=NULL){
       
       
        printf(" %s      %s      %s       %s   \n",temp->usn,temp->name,temp->sem,temp->branch);
         temp=temp->link;
        count++;
        
    }
    printf("THE NUMBER OF STUDENTS  :%d",count);
}


