#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int isempty(struct queue* ptr){
    if(ptr-> front<0 || ptr-> front > ptr-> rear){
        return 1;
    }
    else{
        return 0;
    }
    
}
int isfull(struct queue* ptr){
    if(ptr-> rear= ptr-> size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue* ptr, int data){
    if(isfull(ptr)){
        printf("queue overflow\n");
    }
    else{
        ptr-> rear= ptr-> rear+1;
        ptr-> arr[ptr->rear]= data;

    }
}
int dequeue(struct queue* ptr){
    if(isempty(ptr)){
      return -1;
    }
    else{
        ptr-> front= ptr-> front+1;
        int value= ptr-> arr[ptr-> front];
        
        return value;
    }   
}
int main(){
    struct queue *ptr= (struct queue*)malloc(sizeof(struct queue));
    ptr-> size= 44;
    ptr-> front =-1;
    ptr-> rear= -1;
    ptr-> arr= (int*)malloc(ptr-> size* sizeof(int));
    printf("element present:%d\n",isempty(ptr));
    enqueue(ptr,12);
    printf("element present:%d\n",isempty(ptr));


}