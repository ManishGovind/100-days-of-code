/*
partition list such that all nodes less than x come before nodes greater than or equal to x

*/


class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* le = new ListNode(0);
        ListNode* gr = new ListNode(0);
        ListNode* temp_le = le;
        ListNode* temp_gr = gr;
        while (head != NULL) {
            if (head->val < x) {
                temp_le->next = head;
                temp_le = head;
            }
            else {
                temp_gr->next = head;
                temp_gr = head;
            }
            head = head->next;
        }
        temp_gr->next = NULL;
        temp_le->next = gr->next;
        return le->next;
    }
};