// Fast and slow pointer approach

class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL)
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
            return 0;    
        }
        
        int count = 1;
        slow = fast->next;
        while(slow != fast){
            
            slow = slow->next;
            count++;
        }
    return count;
    }
};