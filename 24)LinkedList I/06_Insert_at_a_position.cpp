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

        Head = createLinkedList(arr,0,5);

        int position = 4; 
        int value = 69;

        Node* Temp = Head; 
        position--;

        while(position--)
            {
                Temp = Temp->next;
            }
         
        Node* Temp2 = new Node(value);
        Temp2->next = Temp->next;
        Temp->next = Temp2;


        Temp = Head;
        // Printing the value
        while(Temp)
            {
                cout<<Temp->data<<" ";
                Temp = Temp->next;
            }
        return 0;
    }