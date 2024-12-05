#include <stdio.h>
#include <stdlib.h>

#define size 5

// Circular Queue structure
typedef struct {
    char items[size];
    int front, rear;
} CircularQueue;

// Function to initialize Circular Queue
void initialize(CircularQueue *cq) {
    cq->front = cq->rear = -1;
}

// Function to check if Circular Queue is empty
int isEmpty(CircularQueue *cq) {
   cq->front == cq->rear;
}

// Function to check if Circular Queue is full
int isFull(CircularQueue *cq) {
     (cq->rear + 1) % size == cq->front;
}

// Function to insert an element into Circular Queue
void enqueue(CircularQueue *cq, char element) {
    if (isFull(cq)) {
        printf("Queue Overflow\n");
    }
    cq->rear = (cq->rear + 1) % size;
    cq->items[cq->rear] = element;
    printf("Element '%c' enqueued successfully\n", element);
}

// Function to delete an element from Circular Queue
void dequeue(CircularQueue *cq) {
    if (isEmpty(cq)) {
        printf("Queue Underflow\n");
    }else{
        cq->front=(cq->front+1)%size;
        cq->items[cq->front];}
}

// Function to display the status of Circular Queue
void display(CircularQueue *cq) {
    if (isEmpty(cq)) {
        printf("Circular Queue is empty\n");
    }
    printf("Circular Queue (Front to Rear): ");
    int i = cq->front;
    do {
        printf("%c ", cq->items[i]);
        i = (i + 1) % size;
    } while (i != (cq->rear + 1) % size);
    printf("\n");
}

int main() {
    CircularQueue cq;
    initialize(&cq);
    int choice;
    char element;
    while (1) {
        printf("\nCircular Queue Operations\n");
        printf("1. Insert an Element\n");
        printf("2. Delete an Element\n");
        printf("3. Display Queue Status\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf(" %c", &element);
                enqueue(&cq, element);
                break;
            case 2:
                dequeue(&cq);
                break;
            case 3:
                display(&cq);
                break;
            case 4:
                printf("Exiting program\n");
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
return 0;
}
