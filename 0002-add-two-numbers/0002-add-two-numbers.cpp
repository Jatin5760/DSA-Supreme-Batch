/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * }; 
 */
class Solution {
public:
    // ListNode* reverseLL(ListNode* curr, ListNode* prev){
    //     // Base Case
    //     if(curr == NULL){
    //         return prev;
    //     }
    //     ListNode* future = curr->next;
    //     curr->next = prev;
    //     return reverseLL(future, curr);
    // }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        while(curr1 != NULL && curr2 != NULL){
            int sum = curr1->val + curr2->val + carry;
            if(sum < 10){
                temp->next = new ListNode(sum);
            }else{
                temp->next = new ListNode(sum % 10);
            }
            carry = sum / 10; 
            curr1 = curr1->next;
            curr2 = curr2->next;
            temp = temp->next;
        }
        while(curr1){
            int sum = curr1->val + carry;
            if(sum < 10){
                temp->next = new ListNode(sum);
            }else{
                temp->next = new ListNode(sum % 10);
            }
            carry = sum / 10;
            curr1 = curr1->next;
            temp = temp->next;
        }
        while(curr2){
            int sum = curr2->val + carry;
            if(sum < 10){
                temp->next = new ListNode(sum);
            }else{
                temp->next = new ListNode(sum % 10);
            }
            carry = sum / 10;
            curr2 = curr2->next;
            temp = temp->next;
        }
        if(carry > 0){
            temp->next = new ListNode(carry);
        }
        return ans->next;
    }
};