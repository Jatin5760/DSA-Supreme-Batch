// Method 1 - By using a vector 

/*
vector<int> ans;
        ans.push_back(head->data);
        
        Node* curr = head;
        while(curr)
        {
            if(ans[ans.size()-1]!=curr->data)
            {
                ans.push_back(curr->data);
            }
        curr = curr->next;
        }
        curr = head;
        int index = 0;
        while(index<ans.size())
        {
            curr->data = ans[index];
            index++;
            curr = curr->next;
        }
        
        int size = ans.size() - 1;
        curr = head;
        while(size--)
        {
            curr = curr->next;
        }
        curr->next = NULL;
        return head;
*/

// Method 2 - Inplace way

 if(head == NULL)
    {
        return head;
    }
    
    ListNode* curr = head->next;
    ListNode* prev = head;
    while(curr)
    {
        if(curr->val == prev->val)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            prev = prev->next;
            curr = curr->next;
        }
    }

    return head;