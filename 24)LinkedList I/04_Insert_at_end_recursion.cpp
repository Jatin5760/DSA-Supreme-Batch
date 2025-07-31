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
Node* createLinkedList(int arr[], int index, int size)
    {
        // Base Case
        if(index == size)
            {
                return NULL;
            }

        Node* Temp;
        Temp = new Node(arr[index]);
        Temp->next =  createLinkedList(arr,index + 1, size);

        return Temp;
    }
int main()
    {
        Node* Head;
        Head = NULL;

        int arr[] = {2,4,6,8,10};
        int size = 5;

        Head = createLinkedList(arr,0,size);

        Node* Temp = Head;
        while(Temp !=NULL)
            {
                cout<<Temp->data<<" ";
                Temp = Temp->next;
            }

        return 0;
    } 
