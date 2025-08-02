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
        Node* Head, *Tail;
        Head = NULL;
        Tail = NULL;

        int arr[] = {20,8,7,9};

        for(int i = 0; i<4; i++)
            {
                if(Head == NULL)
                    {
                        Head = new Node(arr[i]);
                        Tail = Head;
                    }
                else
                    {
                        Tail->next = new Node(arr[i]);
                        Tail = Tail->next;
                    }
            }

        // Deleting a particular node in LL

        // int position = 3;
        // Node* curr = Head;
        // Node* prev = NULL;
        // position--; 

        // while(position--)
        //     {
        //         prev = curr;
        //         curr = curr->next;
        //     }

        //     prev->next = curr->next;
        //     delete curr;



        //Deleting a particular node in LL By handling all cases.
        int x = 3;
        if(x == 1)
            {
                Node* temp = Head;
                Head = Head->next;
                delete temp;
            }
        else
            {
                x--;
                Node* curr = Head;
                Node* prev = NULL;

                while(x--)
                    {
                        prev = curr;
                        curr = curr->next;
                    }
                prev->next = curr->next;
                delete curr;
            } 

        // Printing the LL
            Node* Temp = Head;
            while(Temp)
                {
                    cout<<Temp->data<<" ";
                    Temp = Temp->next;
                }

        return 0;
    }