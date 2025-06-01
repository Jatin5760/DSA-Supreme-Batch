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
int main()
    {
        Node* Head; 
        Head = NULL;

        int arr[] = {2,4,6,8,10};

        // Insert the node at the begining
        for(int i = 0; i<5; i++)
            {
                
        // Linked List doesnt exist
                if(Head == NULL)
                    {
                        Head = new Node(arr[i]);
                    }
        
        // Linked List exist 
                else
                    {
                        Node* temp;
                        temp = new Node(arr[i]);
                        temp->next = Head;
                        Head = temp;
                    }
            }

        // Print the value
        Node* temp = Head;
        while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }

        return 0;
    }