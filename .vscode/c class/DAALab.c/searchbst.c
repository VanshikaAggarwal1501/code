#include<stdio.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* createnode(int data){
    struct Node* newnode= (struct Node*)malloc(sizeof(struct Node));
    newnode-> data= data;
    newnode-> left= NULL;
    newnode-> right= NULL;
    return newnode;
}
int main(){
    struct Node* root= createnode(50);

}