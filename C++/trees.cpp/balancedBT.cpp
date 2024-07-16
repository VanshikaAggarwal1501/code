// a tree is height balanced if and only if 
// the mod of height of left subtree and right subtree is at most 1
// left and right subtrees are balanced
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        this-> data= val;
        this-> left= NULL;
        this-> right= NULL;
    }
};
Node* CreateTree(){
    int val;
    cout<< "enter data"<< endl;
    cin>> val;
    if(val==-1){
        return NULL;
    }
    Node* root= new Node(val);
    root-> left= CreateTree();
    root-> right= CreateTree();
}
int maximumdepth(Node* root){
    if(root== NULL){
        return 0;
    }
    int left= maximumdepth(root-> left);
    int right= maximumdepth(root-> right);
    return max(left,right)+1;
}
bool isBalanced(Node* root){
    if(root== NULL){
        return true;
    }
    int left= maximumdepth(root-> left);
    int right= maximumdepth(root-> right);
    bool difference = (abs(left-right)<=1);
    bool lsubtree= isBalanced(root->left);
    bool rsubtree= isBalanced(root-> right);
    if(difference && lsubtree && rsubtree){
        return true;
    }
    else {
        return false;
    }
} 
int main(){
    Node* root= CreateTree();
}