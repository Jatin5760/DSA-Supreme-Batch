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
        if(index == size)
            {
                return NULL;
            }

        Node* Temp;
        Temp = new Node(arr[index]);
        Temp->next = createLinkedList(arr,index+1,size);

        return Temp;
    }
int main()
    {
        Node* Head;
        Head = NULL;

        int arr[] = {2,4,6,8,10};
        Head = createLinkedList(arr,0,5);

        // Delete the starting node
        // if(Head!=NULL)
        //     {
        //         Node* Temp = Head;
        //         Head = Head->next;
        //         delete Temp;
        //     }

        // Delete the end node
            // if(Head!=NULL)
            //     {
            //         Node* curr = Head;
            //         Node* prev = NULL;
            //         while(curr->next!=NULL)
            //             {
            //                 prev = curr;
            //                 curr = curr->next;
            //             }
            //             delete curr;
            //             prev->next = NULL;
            //     }

        
        // Delete the end node with handling all cases
        // If LL is empty
        if(Head!=NULL)
            {
                // Only one Node is present

                if(Head->next == NULL)
                    {
                        Node* Temp;
                        Head = NULL;
                        delete Temp;
                    }
                
                // Mode than one node is present
                else
                {
                    Node* curr = Head;
                    Node* prev = NULL;

                    while(curr->next!=NULL)
                        {
                            prev = curr;
                            curr = curr->next;
                        }
                        prev->next = curr->next;
                        delete curr;
                }
            }
        // Printing the Array
        Node* Temp = Head;
        while(Temp)
            {
                cout<<Temp->data<<" ";
                Temp = Temp->next;
            }

        return 0;
    }