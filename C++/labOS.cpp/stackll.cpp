#include<bits/stdc++.h>
using namespace std;
 
// creating a linked list;
class Node {
public:
    int data;
    Node* link;
   
    // Constructor
    Node(int n)
    {
        this->data = n;
        this->link = NULL;
    }
};
 
class Stack {
    public:
    Node* top;
    Stack() { top = NULL; }
     void push(int data)
    {
 
        Node* temp = new Node(data);
 
        if (!temp) {
            cout << "\nStack Overflow";
            exit(1);
        }
        temp->data = data;
 
        // Put top pointer reference into temp link
        temp->link = top;
 
        // Make temp as top of Stack
        top = temp;
    }
    bool isEmpty()
    {
        return top == NULL;
    }

    int peek()
    { if (!isEmpty())
            return top->data;
        else
            exit(1);
    }
 
    void pop()
    {
        Node* temp;
 
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow" << endl;
            exit(1);
        }
        else {
 
            // Assign top to temp
            temp = top;
 
            // Assign second node to top
            top = top->link;
             free(temp);
        }
    } 
    void display()
    {
        Node* temp;
 
        // Check for stack underflow
        if (top == NULL) {
            cout << "\nStack Underflow";
            exit(1);
        }
        else {
            temp = top;
            while (temp != NULL) {
 
                // Print node data
                cout << temp->data;
                temp = temp->link;
                if (temp != NULL)
                    cout << " -> ";
            }
        }
    }
};
 
// Driven Program
int main()
{
    cout<< "Name: Vanshika Aggarwal"<< endl;
    cout<< "Roll No. 22001003138"<< endl;
    Stack s;
 
    // Push the elements of stack
    s.push(11);
    s.push(22);
    s.push(33);
 
    // Display stack elements
    s.display();
    cout << "\nTop element is " << s.peek() << endl;
 
    // Delete top elements of stack
    s.pop();
 
    // Display stack elements
    s.display();
 
    // Print top element of stack
    cout << "\nTop element is " << s.peek() << endl;
 
    return 0;
}