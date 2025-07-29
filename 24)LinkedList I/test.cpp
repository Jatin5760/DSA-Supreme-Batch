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
    Head = new Node(5);

    cout<< Head;

    return 0;
}