#include<iostream>
using namespace std;
class Node{

    public:

    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node* CreateDLL(int arr[], int index, int size, Node* back){
    // Base condition
    if(index == size){
        return NULL;
    }
    Node* temp = new Node(arr[index]);
    temp->prev = back;
    temp->next = CreateDLL(arr, index + 1, size, temp); 

    return temp; 
}
int main(){
    int arr[] = {1,2,3,4,5,500};

    Node* head;
    head = CreateDLL(arr,0,6,NULL);

    Node* trev = head;
    while(trev!=NULL){
        cout<<trev->data<<" ";
        trev = trev->next;
    }
    return 0;
}