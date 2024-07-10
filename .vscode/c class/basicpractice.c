#include<stdio.h>
struct stack{
    int top;
    int size;
    int*arr;
    
};
void push(struct stack*ptr, int value){
    if(ptr->top== ptr->size-1){
        printf("stack overflow\n");   
    }
    else{
        ptr-> top= ptr-> top+1;
        ptr-> arr[ptr->top]= value;
    }
}
int pop(struct stack*ptr){
    if(ptr->top==-1){
        return -1;
    }
    else{
        int x= ptr-> arr[ptr-> top];
        ptr-> top--;
        return x;
    }
}
int main(){
    
    struct stack *ptr;
    struct stack *ptr1;
    ptr->top=-1;
    ptr->size=5;
    ptr->arr= (ptr->size)*(sizeof(int)); 
    ptr1->top=-1;
    push(ptr,1);
    push(ptr,2);
    push(ptr,3);
    int ans= pop(ptr);
    push(ptr1, ans);
}