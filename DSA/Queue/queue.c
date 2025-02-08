#include <stdio.h>
#define SIZE 5  // Define the size of the queue

int queue[SIZE];
int front = -1, rear = -1;

// Function to add an element to the queue (enqueue)
void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full! Cannot enqueue %d\n", value);
    } else {
        if (front == -1) {
            front = 0;  // Initialize front when the first element is enqueued
        }
        rear++;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

// Function to remove an element from the queue (dequeue)
void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty! Cannot dequeue\n");
    } else {
        printf("Dequeued %d\n", queue[front]);
        front++;
        // Reset the queue if it becomes empty after dequeuing
        if (front > rear) {
            front = rear = -1;
        }
    }
}

// Function to display the elements of the queue
void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Main function to test the queue implementation
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();  // Output: Queue elements: 10 20 30

    dequeue();  // Output: Dequeued 10
    display();  // Output: Queue elements: 20 30

    enqueue(40);
    enqueue(50);
    enqueue(60); // Output: Queue is full! Cannot enqueue 60
    display();  // Output: Queue elements: 20 30 40 50

    dequeue();  // Output: Dequeued 20
    display();  // Output: Queue elements: 30 40 50

    return 0;
}