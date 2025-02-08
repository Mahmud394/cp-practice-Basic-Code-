#include <stdio.h>
#define SIZE 5 // Define the maximum size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to check if the queue is empty
int isEmpty() {
    return front == -1;
}

// Function to check if the queue is full
int isFull() {
    return rear == SIZE - 1;
}

// Function to add an element to the queue
void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0; // Set front to 0 if this is the first enqueue
        }
        queue[++rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Function to remove an element from the queue
int dequeue() {
    if (isEmpty()) {
        printf("Queue is empty! Cannot dequeue\n");
        return -1;
    } else {
        int value = queue[front];
        if (front == rear) {
            // Reset queue if it becomes empty after this dequeue
            front = rear = -1;
        } else {
            front++;
        }
        printf("Dequeued %d\n", value);
        return value;
    }
}

// Function to display the elements in the queue
void display() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    
    dequeue();
    dequeue();
    display();
    
    enqueue(60);
    display();
    
    return 0;
}