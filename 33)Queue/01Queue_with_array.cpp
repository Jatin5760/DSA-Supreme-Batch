#include <iostream>
using namespace std;

// Queue with arrays
class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    // Constructor
    Queue(int n)
    {
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool isEmpty()
    {
        return front == -1;
    }
    bool isFull()
    {
        return rear == size - 1;
    }

    void push(int x)
    {
        if (isEmpty())
        {
            cout<<"Pushed "<< x <<" into the Queue"<<endl;
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if (isFull())
        {
            cout << "Queue is overflow";
            return;
        }
        else
        {
            rear = rear + 1;
            arr[rear] = x;
            cout<<"Pushed "<< x <<" into the Queue"<<endl;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Queue is Empty";
            return;
        }
        else
        {
            if (front == rear)
            {
                cout<<"Popped "<< arr[front] <<" from the Queue"<<endl;
                front = -1;
                rear = -1;
            }
            else
            {
                cout<<"Popped "<< arr[front] <<" from the Queue"<<endl;
                front = front + 1;
            }
        }
    }
    
    int start(){
        if(isEmpty()){
            cout<<"Queue is Empty";
            return -1;
        }
        else{
            return arr[front];
        }
    }
};

int main()
{
    Queue q(5);
    q.push(5);
    q.push(15);
    q.push(51);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
}