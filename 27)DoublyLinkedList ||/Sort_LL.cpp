// Method 1 Using an array 

/*

class Solution {
public:
    ListNode* sortList(ListNode* head) {

        if(head == NULL)
        {
            return head;
        }

        if(head->next == NULL)
        {
            return head;
        }

        vector<int> nums;
        ListNode* trev = head;

        while(trev)
        {
            nums.push_back(trev->val);
            trev = trev->next;
        }

        sort(nums.begin(), nums.end());

       ListNode* ans = new ListNode(0);
       ListNode* tail = ans;

       for(int i = 0; i<nums.size(); i++)
       {
            tail->next = new ListNode(nums[i]);
            tail = tail->next;
       }
       

       tail = ans;
       ans = ans->next;
       delete tail;

        return ans;
    }
};

*/