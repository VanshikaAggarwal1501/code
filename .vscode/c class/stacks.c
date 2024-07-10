#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* createnode(int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    ptr-> next= NULL;
    return ptr;
}
int isempty(struct node* top){
    if(top== NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct node* top){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    if(ptr== NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct node* top, int data){
    if(isfull(top)){
        printf("stack overflow\n");
    }
    else{
        struct node* ptr= (struct node*)malloc(sizeof(struct node));
        ptr-> data= data;
        ptr-> next= top;
        top= ptr;
    }
}

int pop(struct node* top){
    if(isempty(top)){
        printf("stack underflow\n");
        return -1;
    }
    else{
        struct node* p= top;
        int value= top-> data;
        top= top-> next;
        free(p);
        return value;
    }
}
int peek(struct node* top, int pos){
    struct node* ptr= top;
    for(int i=0; (i<pos-1 && ptr!=NULL); i++){
        ptr= ptr-> next;
    }
    if(ptr== NULL){
        return -1;
    }
    else{
        return ptr-> data;
    }

}
int main(){
    struct node* top= createnode(11);
    push(top, 12);
    int ans= peek(top, 2);
    printf("data is %d\n", ans);



}