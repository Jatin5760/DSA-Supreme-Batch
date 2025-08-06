#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};
int main()
{
    Node* head = NULL;
    // Insert at start

    // LL doesn't exist
    
    if(head == NULL)
        {
            head = new Node(5);
        } 
    // LL  exist
    else
    {
        Node* temp = new Node(5);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    Node* trev = head;
    while(trev)
        {
            cout<<trev->data<<" ";
            trev = trev->next;
        }

    return 0;
}