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
Node* createLinkedList(int arr[], int index, int size, Node* prev)
    {
        if(index == size)
            {
                return prev;
            }

        Node* temp;
        temp = new Node(arr[index]);
        temp->next = prev;

        return createLinkedList(arr,index+1,size,temp);
    }
int main()
    {
        Node* Head, *prev;
        Head = NULL;
        prev = NULL;

        int arr[] = {2,4,6,8,10};

        Head = createLinkedList(arr,0,5,NULL);
        
        Node* Temp = Head;
        while(Temp)
            {
                cout<<Temp->data<<" ";
                Temp = Temp->next;
            }
        return 0;
    }