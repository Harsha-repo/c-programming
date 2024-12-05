// Develop a menu driven Program in C for the following operations on Doubly Linked
// List(DLL) of Employee Data with the fields: SSN, Name, Dept, Designation,
// Sal, PhNo
// a. Create a DLL of N Employees Data by using end insertion.
// b. Display the status of DLL and count the number of nodes in it
// c. Perform Insertion and Deletion at End of DLL
// d. Perform Insertion and Deletion at Front of DLL
// e. Demonstrate how this DLL can be used as Double Ended Queue.
// f. Exit

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


struct employee{
    char ssn[20];
    char name[20];
    char dept[20];
    char desig[20];
    char sal[20];
    char pno[20];
    struct employee *right;
    struct employee *left;

}*new_emp,*front,*rear;

void insert(int choice){

     new_emp=malloc(sizeof(struct employee));

     printf("\nenter the ssn :");
     scanf("%s",new_emp->ssn);

    //  printf("enter the name :");
    //  scanf("%s",new_emp->name);

    //  printf("enter the department :");
    //  scanf("%s",new_emp->dept);

    //  printf("enter the salary :");
    //  scanf("%d",new_emp->sal);

    //  printf("enter the phooneNumber :");
    //  scanf("%d",new_emp->pno);

     if(!rear){
        front = rear = new_emp;
     }
     else{
        if(choice){
            rear->right = new_emp;     // pointing rear end to newnode
            new_emp->left = rear;     // making newnode to point back to rear
            rear = new_emp;          // shifting the rear pointer onto the newnode
            rear->right=NULL;       // making the rightlink as null 
        }
        // else{
        //     new_emp->right = front;    //pointing the newnode from newnode->right
        //      front->left=new_emp                           //backpointing to new node by front
        //     front = new_emp;
        //                                 //front pointer jumping onto the new node
        //     // new_emp->left = rear;       //front alwyas pointing the lastnode 
        // }
        else{
            new_emp->right=front;
            front->left = new_emp;
            front = new_emp;
            front->left = rear;
        }
     }
}

void delete(int choice){
    struct employee *temp,*temp2;
        if(!front){
            printf("\n empty");
        }
        else{
            if(choice){
                temp=rear;
                for(temp2=front;temp2->right==rear;temp2=temp2->right)
                {
                    rear = temp2;
                }
                rear->right=NULL;

            }

            else{
                temp=front;
                front = front->right;
                front->left = rear;
            }
        }
        free(temp);

}

void display(){
    // if(!front || !rear){
    //     printf("no element to print everything is empty");
    // }
    struct employee *temp;            
    int count;
    temp=front;
    while(temp!=NULL){
        printf("\n    %s     ",temp->ssn);
        temp=temp->right;
    }
}
// void reverse_display(){
//     struct employee *temp;
//     temp=rear;
//     do{
//          printf("\n   %s    ",temp->ssn);
//          temp=temp->left;
       
//     }
   
//     while(temp!=front );
//     printf("\n   %s    ",temp->ssn);
//     }

void main(){
    int choice;
    while(true){
        printf("\n1.insert front    2. insert_end   3.display 4.reverse_display 5.delete_rear 6.delete_front");
        printf("\nenter the choice:");
        scanf("%d",&choice);

        switch(choice){
            case 1:insert(0);break;
       
            case 2:insert(1);break;
            case 3:display(1);break;
            // case 4:reverse_display(0);break;
            case 5:delete(1);break;
            case 6:delete(0);break;

        }
    }
}