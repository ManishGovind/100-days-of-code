class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {



        if (list1 == NULL) {
            return list2;
        }

        if (list2 == NULL) {
            return list1;
        }
        //*******Iterative approach
        ListNode* temp = new ListNode(-1);

        ListNode* head = temp;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            }
            else {
                temp->next = list2;
                list2 = list2->next;
            }

            temp = temp->next;

        }

        if (list2) {
            temp->next = list2;

        }
        else {
            temp->next = list1;
        }
        return head->next;

        //******Recursive approach 

          ListNode *result = NULL;
         if(list1->val <= list2->val){
             result = list1;
             result->next = mergeTwoLists(list1->next,list2);

         }else{
             result = list2;
             result->next = mergeTwoLists(list1,list2->next);

         }

        return result; 
    }
};