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
Node* printLL(int arr[], int index, int size)
    {
        // Base Case
        if(index == size)
            {
                return NULL;
            }
        Node* Temp = new Node(arr[index]);
        Temp->next = printLL(arr,index+1,size);

        return Temp;
    }
Node* deleteNode(Node*curr, int x)
    {
        if(x==1)
            {
                Node* Temp = curr->next;
                delete curr;
                return Temp;
            }

        curr->next = deleteNode(curr->next,x-1);

        return curr;
    }
int main()
    {
        Node* Head;
        Head = NULL;

        int arr[] = {2,4,6,8,10};

        Head = printLL(arr,0,5);

        int positionToDelete = 3; 
        Head = deleteNode(Head, positionToDelete);
        
        Node* Temp = Head;
        while(Temp)
            {
                cout<<Temp->data<<" ";
                Temp = Temp->next;
            }

        return 0;
    }