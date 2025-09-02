#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
        int data;
        Node* left, *right;

    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
int main(){

    int x;
    cout<<"Enter the root element"<<endl;
    cin>>x;
    int first, second;
    queue<Node*>q;
    Node* root = new Node(x);
    q.push(root);

    // Building the tree
    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout<<"Enter the left child of "<<temp->data<<" : "<<endl;
        cin>>first; //left node ki value
        // Left Mode
        if(first != -1){
            temp->left = new Node(first);
            q.push(temp->left);
        }
        // Right Node

        cout<<"Enter the right child of "<<temp->data<<" : "<<endl;
        cin>>second;

        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }

    return 0;
}