
//  b. Solving Tower of Hanoi problem with n disks
// 17
// 6 Develop a menu driven Program in C for the following operations on Circular 
// QUEUE ofCharacters (Array Implementation of Queue with maximum size 
// MAX)
// a. Insert an Element on to Circular QUEUE
// b. Delete an Element from Circular QUEUE
// c. Demonstrate Overflow and Underflow situations on Circular QUEUE
// d. Display the status of Circular QUEUE
// e. Exit
// Support the program with appropriate functions for each of the above operations


#include <stdio.h>

#define SIZE 5

int front = -1, rear = -1;
int queue[SIZE];

void add(int item) {
    if ((front == 0 && rear == SIZE - 1) || (rear == (front - 1) % (SIZE - 1))) {  // two conditions that govern the overflow 
        printf("Queue is full\n");
        return;
    } else if (front == -1 && rear == -1) {      // this is when the queue is not started yet. initialized by zero later elements are pushed
        front = rear = 0;
        queue[rear] = item;
    } else if (rear == SIZE - 1 && front != 0) {  //when rear = size and front not zero means some 0th slot is empty and so on (element got popped)
        rear = 0;                                 // we bring rear to start position and then start adding from 0th index 
        queue[rear] = item;
    } else {
        rear++;                                   // noraml condition 
        queue[rear] = item;
    }
}

int delete() {
    if (front == -1) {               
        printf("Queue is empty\n");    // under flow conditionn
        return -1;
    }
    int deleted_item = queue[front];   
    if (front == rear) {         
        front = rear = -1;  
    } else if (front == SIZE - 1) {
        front = 0;
    } else {
        front++;                       // increasing the front till it reaches the maximum size 
    }
    return deleted_item;
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Elements in the queue are: ");
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    } else {
        for (int i = front; i < SIZE; i++) {
            printf("%d ", queue[i]);
        }
        for (int i = 0; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
    }
    printf("\n");
}

int main() {
    int choice, item;
    do {
        printf("\n1. Add\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to add: ");
                scanf("%d", &item);
                add(item);
                break;
            case 2:
                printf("Deleted item is: %d\n", delete());
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;

}
