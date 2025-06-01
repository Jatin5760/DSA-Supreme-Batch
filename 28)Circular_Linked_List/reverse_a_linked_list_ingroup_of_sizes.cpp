while (first->next)
{
    int x = k;
    Node *second = first->next;
    Node *prev = first;
    Node *curr = first->next;

    while (x && curr)
    {
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
        x--;
    }

    first->next = prev;
    second->next = curr;
    first = second;
}

first = head;
head = head->next;
delete first; 

return head;
