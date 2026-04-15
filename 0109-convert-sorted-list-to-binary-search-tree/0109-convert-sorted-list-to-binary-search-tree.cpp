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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int getLen(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    TreeNode* solve(ListNode* & head, int len){
        if(!head) return NULL;
        if(len <= 0) return NULL;

        TreeNode* left = solve(head, len/2);
        int element = head->val;
        TreeNode* root = new TreeNode(element);
        root->left = left;
        head = head->next;
        TreeNode* right = solve(head, len - len/2 - 1);
        root->right = right;

        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int len = getLen(head);
        TreeNode* root = solve(head, len);
        return root;
    }
};