// Slow and fast pointer to remove loop from the LinkedList

// Method - 1
/*
class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast)
            {
                break;
            }
        }
        
        if(fast == NULL || fast->next == NULL)
        {
            return;
        }
        
        slow = head;
        
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        while(slow->next!=fast)
        {
            slow = slow->next;
        }
        slow->next = NULL;
        
    }
};

*/

// Method - 2

  Node* slow = head;
        Node* fast = head;
        
        while(fast && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next;
            
            if(slow == fast)
            {
                break;
            }
        }
        
        if(!fast || !fast->next)
        {
            return;
        }
        
        // Find length of loop
        slow = fast->next;
        int count = 1;
        
        while(slow!=fast)
        {
            count++;
            slow = slow->next;
        }
        
        slow = head;
        fast = head;
        
        while(count--)
        {
            fast = fast->next;
        }
        
        while(slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        while(slow->next!= fast)
        {
            slow = slow->next;
        }
        slow->next = NULL;
         