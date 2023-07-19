/*
You are given two non-empty linked lists representing two non-negative integers. The most significant digit comes first and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.


*/

class Solution {
public:


    ListNode* reverse(ListNode* head) {
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);
        int carry = 0;
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int val = carry;
            if (l1) {
                val += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                val += l2->val;
                l2 = l2->next;
            }
            carry = val / 10;
            val = val % 10;
            head->next = new ListNode(val);
            head = head->next;
        }

        return reverse(temp->next);
    }
};