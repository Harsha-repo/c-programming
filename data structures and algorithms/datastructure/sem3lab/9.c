#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int c, e;
struct node
{
    int expo, coef;
    struct node *next;                              // fields that are present in the node of a polynomial
} *p1 = NULL, *p2 = NULL, *temp = NULL, *p = NULL;



void insert(struct node **front, int coef, int expo)     // pointer and the parameters are taken as reference .
{
    temp = (struct node *)malloc(sizeof(struct node));  // dynamic allocation of the newnode 
    temp->coef = coef;                                     // assining the respective values to the new node coef , expo etc
    temp->expo = expo;
    temp->next = NULL;

    if (*front==NULL)                         // check whether the linked list is null or not if null then make the new node as the first node
    {
        *front = temp;
        temp->next = *front;               // make the next pointer to point towards itself making it to be circular linked list
    }
    else
    {
        struct node *rear = *front;      // if already a node is present then traverse till last node and then insert at the last node
        while (rear->next != *front)
            rear = rear->next;
        rear->next = temp;
        temp->next = *front;
    }
}

void Add()
{
    int n,e,c;
    p1 = NULL;p2 = NULL, p = NULL;
    printf("\nEnter no of elements in Polynomial 1 : "); 
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Coefficient : ");
        scanf("%d", &c);
        printf("Enter the Exponent : ");
        scanf("%d", &e);
        insert(&p1, c, e);
    }
    printf("\nEnter no of elements in Polynomial 2 : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Coefficient : ");
        scanf("%d", &c);
        printf("Enter the Exponent : ");
        scanf("%d", &e);
        insert(&p2, c, e);
    }
    struct node *t1 = p1, *t2 = p2;        // pointer that are required for the purpose of performing arithmatic operations(add)
    do                                     // that are refering to the polynomials (temp)
    {
        if (t1->expo == t2->expo)            // if both exponents of a variable in both the polynomial are same
        {
            c = t1->coef + t2->coef;
            e = t1->expo;
            t1 = t1->next;
            t2 = t2->next;
        }
        else
        {
            if (t2->expo > t1->expo)       // if exponent is greater 
            {
                c = t2->coef;
                e = t2->expo;
                t2 = t2->next;
            }
            else if (t2->expo < t1->expo) // if exponent is smaller
            {
                c = t1->coef;
                e = t1->expo;
                t1 = t1->next;
            }
        }
        insert(&p, c, e);                // atlast inserting the added polynomial into the new linked list p

    }
    
    while (t1 != p1 || t2 != p2);            //atlastt printing the all the left oout elements in both the polys
    
    temp = p;
    for (temp = p; temp->next != p; temp=temp->next)
    {
        printf("%d, %d\t", temp->coef, temp->expo);
    }

    printf("%d, %d\t", temp->coef, temp->expo);

}

void Eval()
{
    p1 = NULL;
    int n, sum = 0, x;
    printf("\nEnter no of elements in Polynomial : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)                  // we are reentering the poynomial that is been alredy added and evaluting 
                                              // by giving the value of x
    {
        printf("\nEnter the Coefficient : ");
        scanf("%d", &c);
        printf("Enter the Exponent : ");
        scanf("%d", &e);
        insert(&p1, c, e);                        // inserting the added polynomial to the linked list into the p1
    }
    printf("\nEnter the value of x : ");         // intaking the value of x
    scanf("%d", &x);
    struct node *t = p1;                         // a pointer to p1 linked list
    do
    {
        sum += (pow(x, t->expo) * t->coef);         // use of math.h to pow 
        t = t->next;
    }while (t != p1);                                  // traverse till   last
    printf("Evaluation value at x = %d is %d", x, sum); //sum is stored in sum variable
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