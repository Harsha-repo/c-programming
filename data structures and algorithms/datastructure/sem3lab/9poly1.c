#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node {

    int expo;
    int coef;
    strcut node *link;                         // fields in polynomial ecpo , coef,link to next node 
}*p1=NULL,*p2=NULL,*p=NULL,*temp=NULL;         // variables that points to polys and temp to create nodes and p to store the ans poly


void insert(struct node **front , int expo,int coef){      // first insert function

    temp = malloc(sizeof(struct node ));           // simple node creation  dynamic allocation 
    temp->coef = coef;
    temp->expo - expo;
    temp->link = NULL;                  // after asssgining the values to all then make the pointer to point same node 

    if(*front==NULL){                            // front pointer created to be head of the node 
        temp = *front;
        temp->link = *front;                       // self pointer 
    }
    else{
        struct node *rear = *front;            // we creating the rear pointer to go forward as the ll gets updated 
        while(rear->link!=*front)
        rear = rear->link;               
    rear = temp;
    rear->link = *front;                        // update the rear also to point towards the front node again making the circular 

    }
}
void add(){                                                // here the addition of polys with same expos are made without giving the x value 
    int n,expo,coef;
    p1=NULL,p2=NULL,p=NULL;

    printf("enter the number of elements in the poly:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the coef:");
        scanf("%d",&coef);
        printf("enter the expo:");
        scanf("%d",&expo);
        insert(&p1,coef,expo);          // inserting the first element into the p1 pointer linked list 
    }

    printf("enter the number of elements in the poly2:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the coef:");
        scanf("%d",&coef);
        printf("enter the expo:");
        scanf("%d",&expo);
        insert(&p2,coef,expo);            // similarly inserting the elements to the p2 linked list 
    }

    struct node *t1=p1,*t2=p2;            // pointer to point the expos of both the polys 

    do{ 
        if(t1->expo==t2->expo){               
            c = t1->ceof + t2->coef; 
            e = t1->expo;
            t1->link;
            t2->link;
        }
        else{

            if(t1->expo>t2->expo){
                c = t1->ceof;
                e = t1->expo;
                t1 = t1->link;
            }
            else if(t1->coef<t2->coef){
                c=t2->coef;
                e=t2->expo;
                t2=t2->link;
            }
        }
        insert(&p,c,e)                                 // insert the result of both the polys into the another linked list p
    }while(t1!=p1 || t2!=p2);                         // untill the entire polys are traversed the loop is repeated 


// pointing the p and printing the results of the additon of the two polys

    temp = p;                       
    while(temp->link!=p){
        printf("%d   %d ",temp->coef,temp->expo);
        temp = temp->link;
    }
    printf("%d    %d  ",temp->coef,temp->expo);
}

// this is for evaluation of the polynomial by accepting the value to the variable

void eval(){
p1 = NULL;        
int x,sum=0;
   printf("enter the number of elements in the poly:");
   scanf("%d",&n);

   for(int i=0;i<n;i++){
    printf("enter the coef:");
    scanf("%d",&ceof);
    printf("enter expo:");
    scanf("%d",&expo);

    insert(&p1,coef,expo);       // insert the resultant function into the p1 liaqqnked list 
   }
printf("etner hte value of x:");
scanf("%d",&x);

   struct node *t1=p1;         // t1 pointer to traverse the p1 linked list 
   do{
    sum = sum+pow((x,t1->expo)*t1->coef);


   }while(t1!=p1);
printf("ans = %d",sum);
}

int main(){
   int choice ;
   while(1){
    printf("1. addition  2. eval   3 .exit \n enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        add();
        r
    }
   }

}