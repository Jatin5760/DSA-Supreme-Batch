// Method 1

//  bool check(vector<Node*>visited, Node* curr){
//         for(int i = 0; i<visited.size();i++){
//             if(visited[i] == curr){
//                 return 1;
//             }
            
//         }
        
//         return 0;
//     }
//     bool detectLoop(Node* head) {
//         // your code here
//         Node* curr = head;
//         vector<Node*>visited;
        
//         while(curr!=NULL){
//             if(check(visited,curr)){
//                 return 1;
//             }
//             visited.push_back(curr);
//             curr = curr->next;
//         }
        
//         return 0;
//     }


// Method 2 - Fast and slow pointer

ListNode* slow = head;
ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                return 1;
            }
        }
        return 0;

