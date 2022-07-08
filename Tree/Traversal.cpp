#include <iostream>

using namespace std;
struct node {
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void Preorder(node* root ){
    cout<<root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
    
}
void Inorder(node* root ){
    Inorder(root->left);
    cout<<root->data<<" ";
    Inorder(root->right);
    
}
void Postorder(node* root ){
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<" ";
    
}
int main()
{
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5); 
    root->right->left = new node(6); 
    root->right->right = new node(7); 
    
    cout<<"Preorder Traversal with recurssion: ";
    Preorder(root);
    cout<<endl;
    cout<<"Postorder Traversal with recurssion: ";
    Postorder(root);
    cout<<endl;
    cout<<"Inorder Traversal with recurssion: ";
    Inorder(root);
    cout<<endl;
    return 0;
}