#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traversal(struct node* ptr){

    while(ptr!=NULL){
        printf("element is:%d\n", ptr-> data);
        ptr= ptr-> next;
    }
}
struct node* insertatbegin(struct node* head, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    ptr-> next= head;
    head= ptr;
    return head;

}
struct node* insertatindex(struct node* head, int data, int index){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    int i=0;
    struct node* p= head;
    while(i!= index-1){
        p= p-> next;
        i++;
    }
    ptr-> next= p-> next;
    p-> next= ptr;
    return head;
}
struct node* insertatend(struct node* head, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    struct node* p= head;
    while(p-> next!= NULL){
        p= p-> next;
    }
    p-> next= ptr;
    ptr-> next= NULL;
    return head;
}
struct node* deleteatbegin(struct node* head){
    struct node* ptr= head;
    head= head-> next;
    free(ptr);
    return head;
}
struct node* deleteinmiddle(struct node* head, int index){
    struct node* p= head;
    struct node* ptr= head-> next;
    int i=0;
    while(i!= index-1){
        p= p-> next;
        ptr= ptr-> next;
        i++;
    }
    p-> next= ptr-> next;
    free(ptr);
    return head;
}
struct node* deleteatend(struct node* head){
    struct node* p= head;
    struct node* ptr= head-> next;
    while(ptr->next!= NULL){
        p=p-> next;
        ptr= ptr-> next;
    }
    p-> next= NULL;
    free(ptr);
    return head;
}
// traversing circular linkedlist
void circulartraversal(struct node* head){
    struct node* ptr= head;
    do{
        printf("element is%d\n", ptr-> data);
        ptr= ptr-> next;
    }while(ptr!= head);

}
// insertion in circular linkedlist
struct node* insertionstart(struct node* head, int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    struct node* p= head;
    while(p-> next!= head){
        p= p-> next;
    }
        ptr-> next= head;
        p-> next= ptr;
        head= ptr;
        return head;
}
// deletion in circular linkedlist
struct node* deletionend(struct node* head){
    struct node* p= head;
    struct node* q= head-> next;
    while(q-> next!=head){
        p= p-> next;
        q= q-> next;
    }
    p-> next= head;
    free(q);
    return head;
}

int main(){
    // allocating memory to the node
    struct node* head= (struct node*)malloc(sizeof(struct node));
    struct node* second= (struct node*)malloc(sizeof(struct node));
    struct node* third= (struct node*)malloc(sizeof(struct node));
    struct node* fourth= (struct node*)malloc(sizeof(struct node));
    // linking the nodes
    head-> data= 7;
    head-> next= second;
    second-> data= 11;
    second-> next= third;
    third-> data= 12;
    third-> next= fourth;
    fourth-> data= 23;
    fourth-> next= head;
    //head= insertatbegin(head, 24);
    //head= insertatindex(head, 45,2);
    //head= insertatend(head, 44);
    //head= deleteatbegin(head);
    //head= deleteinmiddle(head, 2);
    //head= deleteatend(head);
    //head= insertionstart(head, 99);
    head= deletionend(head);
    circulartraversal(head);


    
    

}
