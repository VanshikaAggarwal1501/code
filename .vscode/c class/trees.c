#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
// creating a node
struct node* createnode(int data){
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    ptr-> left= NULL;
    ptr-> right= NULL;
    return ptr;
}
void inorder(struct node* root){
    if(root!= NULL){
        inorder(root-> left);
        printf("element is:%d\n", root-> data);
        inorder(root-> right);
    }
}
void preorder(struct node* root){
    if(root!= NULL){
        printf("element is:%d\n", root-> data);
        preorder(root-> left);
        preorder(root-> right);

    }
}
// traversing a node
int main(){
    struct node* root= createnode(12);
    struct node* l1= createnode(1);
    struct node* r1= createnode(11);
    struct node* leaf1= createnode(112);
    struct node* leaf2= createnode(2);
   // linking the nodes
   root-> left= l1;
   root-> right= r1;
   l1-> left= leaf1;
   r1-> right= leaf2;
   preorder(root);
    

}