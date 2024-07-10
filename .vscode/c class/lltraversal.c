// traversal in a linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node* ptr){
    
    while(ptr!= NULL){
        printf("element is: %d", ptr->data);
        printf("\n");
        ptr= ptr-> next;
    }
}
// insertion in a linked list
struct node* insertatstart(struct node* head, int data) {
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    ptr-> next= head;
    head = ptr;
    return head;
}
struct node* insertinbetween(struct node* head, int index,int data){
    struct node* p= head;
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    int i=0;
    while(i!= index-1){
        p= p-> next;
        i++;
    }
    ptr-> next= p-> next;
    p-> next= ptr;
    return head;

}

struct node* insertatend(struct node* head, int data) {
    struct node*p = head;
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    while(p-> next!= NULL){
        p=p-> next;
    }
    p-> next= ptr;
    ptr-> next= NULL;
    return head;
}
// deletion in a linked list
struct node* deleteatstart(struct node* head){
    struct node* ptr= head;
    
    head= head-> next;
    free(ptr);
    return head;   

}
struct node* deleteatindex(struct node* head, int index){
    struct node*p= head;
    struct node* ptr= head-> next;
    int i=0;
    while(i!= index-1){
        p=p-> next;
        ptr = ptr-> next;
        i++;
    }
    p-> next= ptr-> next;
    free(ptr);
    return head;
}
struct node* deleteatlast(struct node* head){
    struct node* p= head;
    struct node* ptr= head-> next;
    while(ptr-> next!= NULL){
        p= p-> next;
        ptr= ptr-> next;
    }
    p-> next= NULL;
    free(ptr);
    return head;
}
struct node* deleteatnode(struct node* head, int value){
    struct node* p= head;
    struct node* ptr= head-> next;
    while(ptr-> data!= value && ptr-> next!= NULL){
        p= p-> next;
        ptr= ptr-> next;
    }
    if(ptr-> next== NULL){
        return NULL;
    }
    else{
        p-> next= ptr-> next;
        free(ptr);
    }
    return head;

}
void circulartraversal(struct node* head){
    struct node* ptr= head;
    do{
        printf("element is: %d\n", ptr-> data);
        ptr = ptr -> next;
    } while(ptr!= head);
}
// insertion in circular linkedlist
struct node* insertatfirst(struct node* head, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    struct node* p= head;
    while(p-> next!= head){
        p= p-> next;
    }
    ptr-> next= head;
    p-> next= ptr;
    head = ptr;
    return head;
}
struct node* insertatmiddle(struct node* head, int index, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    struct node* p= head;
    int i=0;
    while(i!= index-1){
        p= p-> next;
        i++;
    }
    ptr-> next= p-> next;
    p-> next= ptr;
    return head;
}
struct node* deleteatend(struct node* head){
    struct node* p= head;
    struct node* ptr= head-> next;

    while(ptr-> next!= head){
        p= p-> next;
        ptr= ptr-> next;
    }
    p-> next= head;
    free(ptr);
    return head;
}

int main(){
     struct node* head= (struct node*)malloc(sizeof(struct node));
     struct node* second= (struct node*)malloc(sizeof(struct node));
     struct node* third= (struct node*)malloc(sizeof(struct node));
     struct node* fourth= (struct node*)malloc(sizeof(struct node));
     // linking the four nodes
     head-> data= 7;
     head-> next= second;
     second-> data= 11;
     second-> next= third;
     third-> data= 23;
     third-> next= fourth;
     fourth-> data= 12;
     fourth-> next= head;
     //traversal(head);
     //head = deleteatstart(head);
     //head=deleteatindex(head, 2);
     //head= deleteatlast(head);
     //head= deleteatnode(head, 2);
     //head= insertatend(head, 45);
     //head= insertatfirst(head, 33);
     //head= insertatmiddle(head, 2,2);
     head= deleteatend(head);
     circulartraversal(head);

    

}