#include <bits/stdc++.h>
using namespace std;
 
struct QNode {
    int data;
    QNode* next;
    QNode(int d)
    {
        data = d;
        next = NULL;
    }
};
 
struct Queue {
    QNode *front, *rear;
    Queue() { front = rear = NULL; }
 
    void enQueue(int x)
    {
 
        // Create a new LL node
        QNode* temp = new QNode(x);
        if (rear == NULL) {
            front = rear = temp;
            return;
        }
 
        // Add the new node at
        // the end of queue and change rear
        rear->next = temp;
        rear = temp;
        cout<< "inserted "<< temp-> data<< " in queue"<< endl;
    }
 
    void deQueue()
    {
        // If queue is empty, return NULL.
        if (front == NULL)
            return;
 
        // Store previous front and
        // move front one node ahead
        QNode* temp = front;
        front = front->next;
        if (front == NULL)
            rear = NULL;
        cout<< "dequeued "<< temp-> data<< endl;
        delete (temp);
    }
};
 

int main()
{
    cout<< "Name: Vanshika Aggarwal"<< endl;
    cout<< "Roll No. 22001003138"<< endl; 
    Queue q;
    q.enQueue(10);
    q.enQueue(20);
    q.deQueue();
    q.deQueue();
    q.enQueue(30);
    q.enQueue(40);
    q.enQueue(50);
    q.deQueue();
    cout << "Queue Front : " << ((q.front != NULL) ? (q.front)->data : -1)<< endl;
    cout << "Queue Rear : " << ((q.rear != NULL) ? (q.rear)->data : -1);
}