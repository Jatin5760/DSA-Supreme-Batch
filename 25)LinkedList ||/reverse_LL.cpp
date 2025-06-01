/*

Method 1: With array

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        vector<int> ans;
        ListNode* temp = head;
        while(temp)
            {
                ans.push_back(temp->val);
                temp = temp->next;
            }
        int i = ans.size()-1;
        temp = head;
        while(temp)
            {
                temp->val = ans[i];
                i--;
                temp = temp->next;
            }
        return head;
    }
};




Method 2: Without Array

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

      ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr)
            {
                ListNode* future = curr->next;
                curr->next = prev;
                prev = curr;
                curr = future;
            }
        return prev;
    }
};


// Method 3: Recurssion

ListNode* reverse(ListNode* curr, ListNode* prev)
    {
        if(curr == NULL)
            {
                return prev;
            }


        ListNode* future = curr->next;
        curr->next = prev;

        return reverse(future,curr);
    }
    
*/
