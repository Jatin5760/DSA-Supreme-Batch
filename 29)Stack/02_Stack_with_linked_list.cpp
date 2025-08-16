#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;


    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
class Stack
{
    Node* top;
    int size;

    public:
     
    Stack()
    {
        top = NULL;
        size = 0;
    }

    void push(int value)
    {
        Node* temp = new Node(value);
        if(temp == NULL)
        {
            cout<<"Stack overflow"<<endl;
            return;
        }

        else
        {
            temp->next = top;
            top = temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack"<<endl;
        }
       
    }

    void pop()
    {
        if(top == NULL)
        {
            cout<<"Stack Underflow"<<endl;
            return;
        }

        else
        {
            Node* temp = top;
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            top = top->next;
            delete temp;
        }
      
    }

    int peak()
    {
        if(top == NULL)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else
        {
            return top->data;
        }
    }


    bool isEmpty()
    {
        return top==NULL;
    }

    int isSize()
    {
        return size;
    }
};

int main()
{
    Stack s;
    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);
    s.push(90);
    
    s.pop();

    cout<<s.isSize()<<endl;

    cout<<s.isEmpty()<<endl;


    return 0;
}