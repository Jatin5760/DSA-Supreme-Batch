 // Method 1: Traversal with count parameter

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp)
            {
                count++;
                temp = temp->next;
            }
        
        count = count/2;
        temp = head;
        while(count--)
            {
                temp = temp->next;
            }
        
        return temp;
    }
};


// Method 2: Fast and slow pointer
// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode * slow = head, *fast = head;
//         while(fast!=NULL && fast->next!=NULL){
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         return slow;
//     }
// };
