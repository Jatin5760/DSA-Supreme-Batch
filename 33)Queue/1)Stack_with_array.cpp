#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(int n){
        arr = new arr[n];
        front = -1;
        rear = -1;
        size = n;
    }
};
bool isEmpty(){
    return front == -1;
}
bool isFull(){
    return rear == size - 1;
}
int main(){

    return 0;
}