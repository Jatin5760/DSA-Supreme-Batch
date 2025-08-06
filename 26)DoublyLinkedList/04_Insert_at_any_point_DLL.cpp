#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};
Node *CreateDLL(int arr[], int index, int size, Node *back)
{
    // Base case
    if (index == size)
    {
        return NULL;
    }

    Node* temp = new Node(arr[index]);

    temp->prev = back;

    temp->next = CreateDLL(arr,index+1,size,temp);

    return temp;
}
int main()
{
    Node* head = NULL;

    int arr[] = {2,4,6,8,10};

    int index = 0;
    int size = 5;

    head = CreateDLL(arr,0,5,NULL);

    // Insert at given position
    int pos = 2;

    // Insert at start
    if(pos==0)
    {
        // LinkedList exist na kare
        if(head == NULL)
        {
            head =new Node(5);
        }
        // Exist karti hai
        else
        {
            Node* temp = new Node(5);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }
    else
    {
        Node* curr = head;
        // Go to the node, after which i have to insert
        while(--pos)
        {
            curr = curr->next;
        }

        // Insert at end
        if(curr->next == NULL)
        {
            Node* temp = new Node(5);
            temp->prev = curr;
            curr->next = temp;
        }
        // Insert at middle
        else
        {
            Node* temp = new Node(5);
            temp->next = curr->next;
            temp->prev = curr;
            curr->next = temp;
            temp->next->prev = temp;
        }
    }
    

    while(head)
        {
            cout<<head->data<<" ";
            head = head->next;
        }

    return 0;
}