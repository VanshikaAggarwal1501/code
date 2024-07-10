#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}
void traversal(struct Node** top) {
    struct Node* p= (struct Node*)malloc(sizeof(struct Node));
    p= *top;
    while(p!= NULL) {
        printf("%d", p-> data);
        p= p-> next;
    }
}

int IsEmpty(struct node* top) {
    if(top== NULL) {
        return 1;
    }
    return 0;
}
int IsFull(struct Node* top) {
    struct Node* p= (struct Node*)malloc(sizeof (struct Node));
    if(p== NULL) {
        return 1;
    }
    return 0;
}
void push(struct Node** top, int data) {
    if(IsFull(top)) {
        printf("stack overflow\n");
        return;
    }
    struct Node* p= (struct Node*)malloc(sizeof (struct Node));
    p-> data = data;
    p-> next = *top;
    *top = p;    
}
int pop(struct Node** top) {
    if(IsEmpty(top)) {
        printf("stack underflow\n"); 
         return -1;
        
    }
    else {
        struct Node** temp = *top;
        int temp = (*top) -> data;
        *top = (*top) -> next;
        free(top);
        return temp;
    }
}
int main() {
    struct Node* top= NULL;
    push(10, &top);
    
}



