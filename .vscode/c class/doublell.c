// doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* createnode(struct node* head, int data) {
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    ptr-> prev= NULL;
    ptr-> next= NULL;
    //printf("element is : %d\n", ptr-> data);
    return head;
}
struct node* insertatbegin(struct node* head, int data){
    // variable that store address of new node
    struct node* temp= NULL;
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    
}
int main(){
    struct node* head= NULL;
    
    head= createnode(head, 12);



}