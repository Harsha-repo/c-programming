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

     printf("enter the ssn :");
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
            rear->right = new_emp;
            new_emp->left = rear;
            rear = new_emp;
            rear->right=NULL;
        }
        else{
            new_emp->right = front;
            front->left = new_emp;
            front = new_emp;
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
        printf("\n%p     %s      %p  ",temp->left,temp->ssn,temp->right);
        temp=temp->right;
    }
}
void reverse_display(){
    struct employee *temp;
    temp=rear;
    do{
         printf("\n %p   %s     %p",temp->left,temp->ssn,temp->right);
         temp=temp->left;
       
    }
   
    while(temp!=front );
    printf("\n %p   %s     %p",temp->left,temp->ssn,temp->right);
    }

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
            case 4:reverse_display(0);break;
            case 5:delete(1);break;
            case 6:delete(0);break;

        }
    }
}