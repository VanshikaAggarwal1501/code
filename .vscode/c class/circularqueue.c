#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Structure to represent a queue
typedef struct {
    Node* front; 
    Node* rear;  
} Queue;

// Function to initialize an empty queue
void initializeQueue(Queue* q) {
    q->front = NULL;
    q->rear = NULL;
}

int isEmpty(Queue* q) {
    return q->front == NULL;
}

void enqueue(Queue* q, int data) {
    // Create a new node
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Cannot enqueue.\n");
        return;
    }

    newNode->data = data;
    newNode->next = NULL;

    // If the queue is empty, the new node is both the front and rear
    if (isEmpty(q)) {
        q->front = newNode;
        q->rear = newNode;
    } else {
        // Otherwise, add the new node to the rear and update the rear pointer
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Cannot dequeue.\n");
        exit(EXIT_FAILURE);
    }

    int data = q->front->data;

    // Move the front pointer to the next node
    Node* temp = q->front;
    q->front = q->front->next;

    // If the queue becomes empty after dequeue, update the rear pointer as well
    if (q->front == NULL) {
        q->rear = NULL;
    }

    // Free the memory of the dequeued node
    free(temp);

    return data;
}

void display(Queue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    Node* current = q->front;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Function to free the memory allocated for the queue
void destroyQueue(Queue* q) {
    // Dequeue all elements to free the memory of each node
    while (!isEmpty(q)) {
        dequeue(q);
    }
}

int main() {
    Queue q;
    initializeQueue(&q);

    // Enqueue some elements
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    // Display the elements in the queue
    display(&q);

    // Dequeue elements and display the result
    int dequeuedElement = dequeue(&q);
    printf("Dequeued: %d\n", dequeuedElement);
    display(&q);

    // Free the memory allocated for the queue
    destroyQueue(&q);

    return 0;
}
