#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;


    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){

    Node* Head;
    Head = NULL;

    int arr[] = {2,4,6,8,10};

    for(int i = 0; i< 5; i++){
        if(Head == NULL){
            Head = new Node(arr[i]);
        }
        else{
            Node* Temp;
            Temp = new Node(arr[i]);
            Temp->next = Head;
            Head = Temp;
        }
    }
    Node* Print = Head;
    while(Print != NULL){
        cout<< Print->data<<" ";
        Print = Print->next;
    }
    return 0;
}