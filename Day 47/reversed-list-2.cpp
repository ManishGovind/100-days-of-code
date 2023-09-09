/*
Given the head of a singly linked list and two integers left and right where left <= right, 
reverse the nodes of the list from position left to position right, and return the reversed list.
*/

class Solution {
public:
    ListNode* reverseBetween(ListNode* root, int l, int r) {
        if (!root || l == r) return root;

        ListNode* p = root, * left = NULL, * right = NULL, * left_prev = NULL, * right_next = NULL;
        int c = 0;

        while (p) {
            ++c;
            if ((c + 1) == l) {
                left = p->next;
                left_prev = p;
            }
            if (c == r) {
                right = p;
                right_next = p->next;
                break;
            }
            p = p->next;
        }

        if (l == 1) left = root;

        p = left;
        ListNode* q = p->next, * o = left_prev;
        while (p != right_next) {
            p->next = o;
            o = p;
            p = q;
            if (!q) break;
            q = q->next;
        }

        if (left == root) {
            left->next = right_next;
            root = right;
            return root;
        }

        left->next = right_next;
        left_prev->next = right;

        return root;
    }
};