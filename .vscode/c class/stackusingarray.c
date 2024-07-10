#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
int isempty(struct stack * ptr){
    if(ptr-> top==-1){
        return 1;
    }
    else {
        return 0;
    }
}
int isfull(struct stack* ptr){
    if(ptr-> top== ptr-> size-1){
        return 1;
    }
    else {
        return 0;
    }
}
void push(struct stack *ptr, int data){
    if(isfull(ptr)){
        printf("stack overflow\n");
    }
    else{
        ptr-> top++;
        ptr->arr[ptr->top] = data;
    }
}
int pop(struct stack *ptr){
    if(isempty(ptr)){
        printf("stack overflow\n");

    }
    else{
        int value= ptr-> arr[ptr-> top];
        ptr->top--;
        return value;
    }
}
int peek(struct stack *ptr, int i){
    if(ptr-> top-i+1< 0){
        printf("invalid index\n");
    }
    else {
        return ptr-> arr[ptr-> top-i+1];
    }
}
int stacktop(struct stack *ptr){
    return ptr-> arr[ptr-> top];
}
int stackbottom(struct stack *ptr){
    return ptr-> arr[0];
}
int main(){
    struct stack *ptr;
    ptr-> top=-1;
    ptr-> size= 5;
    ptr-> arr= (int*)malloc(ptr-> size* sizeof(int));
    printf("is stack empty:%d\n", isempty(ptr));
    printf("is stack full: %d\n", isfull(ptr));
    push(ptr,12);
    push(ptr, 11);
     printf("is stack empty:%d\n", isempty(ptr));
}
