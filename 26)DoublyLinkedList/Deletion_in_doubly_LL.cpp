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

    Node *temp = new Node(arr[index]);

    temp->prev = back;

    temp->next = CreateDLL(arr, index + 1, size, temp);

    return temp;
}
int main()
{
    Node *head = NULL;

    int arr[] = {2, 4, 6, 8, 10};

    int index = 0;
    int size = 5;

    head = CreateDLL(arr, 0, 5, NULL);

    // Deletion Operation of LL at start

    /*  if(head!=NULL)
        {
            Node* temp = head;
            head = head->next;
            delete temp;

            if(head)
            {
                head->prev = NULL;
            }
        }
    */

    // Deletion operation at last of DLL

    /*   if (head != NULL)
        {
            if (head->next == NULL)
            {
                delete head;
                head = NULL;
            }

            else
            {
                Node *curr = head;
                while (curr->next)
                {
                    curr = curr->next;
                }
                curr->prev->next = NULL;
                delete curr;
            }
        }
    */

    // Delete at particular position
    int pos = 3;

    Node *curr = head;

    // Delete at start
    if (pos == 1)
    {
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            delete temp;

            if (head)
            {
                head->prev = NULL;
            }
        }
    }

    else
    {
        Node *curr = head;
        pos--;
        while (pos--)
        {
            curr = curr->next;
        }

        // Last element
        if (curr->next == NULL)
        {
            curr->prev->next = NULL;
            delete curr;
        }

        // Middle Element
        else
        {
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
            delete curr;
        }
    }


    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }

    return 0;
}