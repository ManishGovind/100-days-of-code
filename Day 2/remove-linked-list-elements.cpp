class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        if (!head) {
            return head;
        }
        ListNode* prev = head, * curr = head->next;
        while (curr) {
            if (curr->val == val) {

                prev->next = curr->next;
                curr = curr->next;
            }
            else {
                curr = curr->next;
                prev = prev->next;
            }

        }

        if (head and head->val == val) {
            return head->next;
        }
        return head;

    }
};