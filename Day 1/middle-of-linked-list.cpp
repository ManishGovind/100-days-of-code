class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        // Naive approach
         int cnt = 0 ;
         struct ListNode* temp = head;
         while(temp){

             temp = temp->next;
             cnt++;
         }
         int mid =0;
         if (cnt%2 == 0){
             mid = cnt/2;
         }else{
             mid = (cnt-1)/2;
         }
         while(mid--){
         head = head->next;
         } 
         return head;

       // two pointer approach

        struct ListNode* slow = head;
        struct ListNode* fast = head;

        while (fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;

    }
};