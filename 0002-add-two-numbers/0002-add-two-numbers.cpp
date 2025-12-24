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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode  = new ListNode(-1);
        ListNode* curr = dummyNode;

        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        int sum = 0;

        while(temp1 && temp2){
            sum = temp1->val + temp2->val + carry;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            carry = sum / 10;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        while(temp2){
            sum = temp2->val + carry;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            carry = sum / 10;
            temp2 = temp2->next;
        }

         while(temp1){
            sum = temp1->val + carry;
            curr->next = new ListNode(sum % 10);
            curr = curr->next;
            carry = sum / 10;
            temp1 = temp1->next;
        }

        while(carry){
            curr->next = new ListNode(carry % 10);
            curr = curr->next;
            carry = carry / 10;
        }

        ListNode* head = dummyNode->next;
        return head;
    }
};
