// Method 1

        // if (list1 == NULL) return list2;
        // if (list2 == NULL) return list1;

        // ListNode* curr1 = list1;
        // ListNode* curr2 = list2;
        // ListNode* head = NULL;
        // ListNode* trev = NULL;


        // while (curr1 && curr2) {
            
        //     if (head == NULL) {
        //         if (curr1->val < curr2->val) {
        //             head = new ListNode(curr1->val);
        //             curr1 = curr1->next;
        //         } else {
        //             head = new ListNode(curr2->val);
        //             curr2 = curr2->next;
        //         }
        //         trev = head;
        //     } else {

        //         if (curr1->val < curr2->val) {
        //             trev->next = new ListNode(curr1->val);
        //             curr1 = curr1->next;
        //         } else {
        //             trev->next = new ListNode(curr2->val);
        //             curr2 = curr2->next;
        //         }
        //         trev = trev->next; 
        //     }
        // }

        // while (curr1) {
        //     trev->next = new ListNode(curr1->val);
        //     curr1 = curr1->next;
        //     trev = trev->next;
        // }

     
        // while (curr2) {
        //     trev->next = new ListNode(curr2->val);
        //     curr2 = curr2->next;
        //     trev = trev->next;
        // }

        // return head;


// Method 2

  ListNode* head = new ListNode(0);
        ListNode* tail = head;

        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        while(list1 && list2)
        {
            if(list1->val <= list2->val)
            {
                tail->next = list1;
                list1 = list1->next;
                tail = tail->next;
                tail->next = NULL;
            }
            else
            {   
                tail->next = list2;
                list2 = list2->next;
                tail = tail->next;
                tail->next = NULL;
            }
        }

        if(list1)
        {
            tail->next = list1;
        }
        else
        {
            tail->next = list2;
        }

        tail = head;
        head = head->next;
        delete tail;

        return head;