#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left, * right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
};

void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
};

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
};

Node* binaryTree(){
    int x;
    cin>>x;

    // Base Condition
    if(x == -1){
        return NULL;
    }

    Node* temp = new Node(x);
    // Left child creation
    cout<<"Enter the left child of "<<x<<"  : ";
    temp->left = binaryTree();
    // Right child creation
    cout<<"Enter the right child of "<<x<<" : ";
    temp->right = binaryTree();

    return temp;
}
int main(){

    cout<<"Enter the root Node: ";
    Node* root;
    root = binaryTree();

    cout<<"Preorder: "<<endl;
    preorder(root);
    cout<<"inorder: "<<endl;
    inorder(root);
    cout<<"Postorder: "<<endl;
    postorder(root);
    return 0;
}