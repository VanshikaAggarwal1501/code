#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;

};
struct node* createnode(int data){
    // node bnao
    struct node* ptr= (struct node*)malloc(sizeof(struct node));
    ptr-> data= data;
    ptr-> left= NULL;
    ptr-> right= NULL;
    return ptr;
}
struct node* searchinbst(struct node* root, int target){
    if(root!= NULL){
        if(root-> data== target){
            return root;
        }
        else if(root-> data> target){
            return searchinbst(root-> left, target);
        }
        else{
            return searchinbst(root-> right, target);
        }
    }
    return NULL;
}
void insertioninbst(struct node* root, int target){
    struct node* prev= NULL;
    while(root!= NULL){
        prev= root;
        if(root-> data== target){
            printf("cant insert\n");
        }
        else if(root-> data> target){
            root= root-> left;
        }
        else{
            root= root-> right;
        }
    }
    // prev is pointing to the node jiske left ya right me insertion krna h
    struct node* new= createnode(target);
    if(prev-> data> target){
        // insert in left
        prev-> left = new;
    }
    else{
        prev-> right = new;
    }    
}
struct node* iterativesearch(struct node* root, int target){
    if(root== NULL){
        return NULL;
    }
    while(root!= NULL){
        if(root-> data== target){
            return root;

        }
        else if(root-> data> target){
            root= root-> left;

        }
        else{
            root= root-> right;
        }
    }
    return NULL;
}

int main(){
    struct node* root= createnode(50);
    struct node* l1= createnode(40);
    struct node* r1= createnode(60);
    struct node* leaf1= createnode(35);
    struct node* leaf2= createnode(45);
    struct node* leaf3= createnode(55);
    struct node* leaf4= createnode(70);
    // linking the nodes
    root-> left= l1;
    root-> right= r1;
    l1-> left= leaf1;
     l1-> right= leaf2;
     r1-> left= leaf3;
     r1-> right= leaf4;
     int target= 5;
     if(iterativesearch(root, target)){
        printf("target element found\n");
     }
     else {
        printf("target element not found\n");
     }



}
