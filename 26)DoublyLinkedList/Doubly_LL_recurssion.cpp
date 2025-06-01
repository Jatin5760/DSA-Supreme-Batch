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

    while(head)
        {
            cout<<head->data<<" ";
            head = head->next;
        }

    return 0;
}