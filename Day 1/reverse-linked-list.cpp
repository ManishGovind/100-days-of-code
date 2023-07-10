


class Solution {
public:
    ListNode* reverseList(ListNode* head) {



        struct ListNode* prev = NULL;
        struct ListNode* curr = head;

        while (curr) {
            struct ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

        }
        return prev;
    }
};