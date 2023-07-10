class Solution {
public:
    int length(ListNode* node) {
        int length = 0;
        while (node) {
            ++length;
            node = node->next;
        }
        return length;
    }
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        int cnta = length(headA);
        int cntb = length(headB);


        int diff = abs(cnta - cntb);

        if (cnta > cntb) {
            while (diff--) {
                headA = headA->next;
            }
        }
        else if (cnta < cntb) {
            while (diff--) {
                headB = headB->next;
            }
        }


        while (headA and headB) {
            if (headA == headB)
            {
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
        }
        return NULL;
    }
};