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
class Queue{
    Node* front;
    Node* rear;

    public:
    Queue(){
        front = rear = NULL;
    }
    bool isEmpty(){
        return front == NULL;
    }
    void push(int x){
        if(isEmpty()){
            cout<<"Pushed "<< x << " into the queue"<<endl;
            front = new Node(x);
            rear = front;
            return;
        }
        else{
            rear->next = new Node(x);
            cout<<"Pushed "<< x << " into the queue"<<endl;
            rear = rear->next;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        else{
            cout<<"Popped "<< front->data << " from the queue"<<endl;
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
    int start(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }

};
int main(){
    
    Queue q;
    q.push(5);
    q.push(51);
    q.push(115);
    q.push(58);
    q.pop();
    int start = q.start();
    cout<<start;
    return 0;
}