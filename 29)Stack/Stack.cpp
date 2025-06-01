#include<iostream>
using namespace std;

// Implement it with array
class Stack
{
    int* arr;
    int size;
    int top;
    
    public:

    bool flag;
    
    // Constructor
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
        flag = 1;
    }
 
    // Push

    void push(int value)
    {
        if(top == size - 1)
        {
            cout<<"stack overflow"; 
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout<<"Pushed "<<value<<" into the stack"<<endl;
            flag = 0;
        }
    }

    // Pop

    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            top--;
            cout<<"Popped "<<arr[top+1]<<" from the stack"<<endl;
            if(top == -1)
            {
                flag = 1;
            }
        } 
    }

    // Peak

    int peak()
    {
        if(top == -1)
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        } 
    }

    // Isempty

    bool isEmpty()
    {
        return top==-1;
    }

    // Is size
    int isSize()
    {
        return top+1;
    }

    
};

int main()
{
    Stack S(5);
    // S.push(5);
    // S.push(6);
    // S.push(8);
    // S.pop();
    // S.pop();
    // cout<<S.peak()<<endl;


    S.push(-1);
    // cout<<S.peak()<<endl;
    int value = S.peak();
    if(S.flag == 0)
    {
        cout<<value<<endl;
    }
    
}

 