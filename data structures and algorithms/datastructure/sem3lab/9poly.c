#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int c,e;
struct node {
                                   // structure containing the fields of the polynomial
    int coef;
    int expo;
    struct node *link;

}*p1,*p2=NULL,*p=NULL,*temp=NULL;     // all the polynomials are initialized to NULL and 



void insert(struct node **front,int coef,int expo)     // insert function that intakes the elements into the linked list
{
    temp = malloc(sizeof(struct node));
    temp->coef = coef;
    temp->expo = expo;

    temp->link = *front;                         // self pointing pointer

    if(!front){
        *front = temp;
        temp->link = *front;           
    }
    else{
        struct node *rear = *front;            // creating rear for the further addition of nodes
        while(rear->link!=*front){
            rear = rear->link;
        }

        rear=temp;
        temp->link = *front;                 // self refering pointer
    }   

}

void Add(){
    int n;
    p=NULL,p1=NULL,p2=NULL;

    printf("enter the number of elements in the poy 1:");
    scanf("%d",&n);

    for(int i =0;i<n;i++){

        printf("enter the coef :");
        scanf("%d",&c);
        printf("enter the expo:");
        scanf("%d",&e);
       insert(&p1,c,e);
    }

    printf("enter the number of elements in the poy 1:");
    scanf("%d",&n);

    for(int i =0;i<n;i++){
        
        printf("enter the coef :");
        scanf("%d",&c);
        printf("enter the expo:");
        scanf("%d",&e);
        insert(&p2,c,e);

    }
    // two pointer ofr travrsing the two polynomials
struct node *t1=p1,*t2=p2;
do{

if(t1->expo==t2->expo){

    c = t1->coef+ t2->coef;
    e=t1->expo;
    t1=t1->link;
    t2=t2->link;

}

else{
    if(t1->expo>t2->expo){
        c = t1->coef;
        e = t1->expo;
        t1 = t1->link;
    }
    
    else if(t1->expo<t2->expo){
        c = t2->coef;
        e = t2->expo;
        t2 = t2->link;

    }
}
insert(&p,c,e);
}
while(t1!=p1 ||t2!=p2);

// printing the resultant linked list that is p 

temp = p;
for(temp=p;temp->link!=p;temp=temp->link){
    printf("%d , %d   ",temp->coef,temp->expo);
}
 printf("%d , %d   ",temp->coef,temp->expo);

}//additon got completed 


void Eval(){
p1=NULL;
int x,sum=0,n;
   

    printf("enter the polynomial that is result of addition :");
    printf("enter the no of elements int the polynomial :");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("enter the coef:");
        scanf("%d",&c);
        printf("enter the exponent:");
        scanf("%d",&e);
        insert(&p1,c,e);


    }
     printf("enter the value of the variable in polynomial:");
    scanf("%d",&x);

    struct node *t = p1;
    do{
        sum = sum+(pow(x,t->expo)*(t->coef));
        t = t->link;

    }while(t!=p1);

    printf("the evaluated ans of polynomial is %d ",sum);
}

void main()
{
    int choice;
    while (1)
    {
        printf("\n1. Addition\n2. Evaluation\n3. Exit\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Add();
            break;
        case 2:
            Eval();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Invalid Choice");
            break;
        }
    }
}
