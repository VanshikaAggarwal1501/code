#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void push(struct node* top, int data){
    struct node* p= (struct node*)malloc(sizeof(struct node));
    if(p== NULL){
        printf("stack overflow\n");
    }
    else {
        p-> data= data;
        p-> next = top;
        top= p;
    }
    
}
int isempty(struct node* top){
    if(top== NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int pop(struct node* top){
    struct node* ptr= top;
    if(isempty(top)){
        printf("stack underflow\n");
    }
    else{
        int value = ptr-> data;
        top= top-> next;
        free(ptr);
        return value;
    }
}
int main(){
     struct node* top= NULL; 
     printf("is stack empty:%d\n", isempty(top));
     push(top, 12);
     push(top, 23);
     printf("is stack empty:%d\n", isempty(top));
     
}