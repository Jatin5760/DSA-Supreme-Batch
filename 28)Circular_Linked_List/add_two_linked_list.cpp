Node* Reverse(Node* curr, Node* prev)
{
    if(curr==NULL)
    {
        return prev;
    }
    Node* front = curr->next;
    curr->next = prev;

    return Reverse(front, curr);
}

int main()
{
    Node* first; 
    Node* second;

    first = Reverse(first,NULL);
    second = Reverse(second,NULL);

    Node* curr1 = first, *curr2 = second;

    Node* head = new Node(0);
    Node* tail = head;

    int carry = 0;

    while(curr1 && curr2)
    {
        int sum = curr1->data+curr2->data+carry;
        tail->next = new Node(sum%10);
        tail = tail->next;
        cuur1 = curr1->next;
        curr2 = curr2->next;   
        carry = sum/10;
    }

    while(curr1)
    {
        int sum = curr1->data+carry;
        tail->next = new Node(sum%10);
        tail = tail->next;
        curr1 = curr1->next;
        carry = sum/10;
    }

      while(curr2)
    {
        int sum = curr2->data+carry;
        tail->next = new Node(sum%10);
        tail = tail->next;
        curr2 = curr2->next;
        carry = sum/10;
    }

    while(carry)
    {
        tail->next = new Node(carry%10);
        carry = carry/10;
    }

    head = Reverse(head->next, NULL);

    return head;

}