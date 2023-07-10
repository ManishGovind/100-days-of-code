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

    bool isPalindrome(ListNode* head) {

        struct ListNode* slow = head;
        struct ListNode* fast = head;

        while (fast and fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        if (fast != NULL) {
            slow = slow->next;
        }
        slow = reverse(slow);
        while (slow) {
            if (head->val != slow->val) {
                return false;
            }
            head = head->next;
            slow = slow->next;
        }
        return true;

    }
};


//another approach 
bool isPalindrome(ListNode* head) {

    if (head == NULL)
        return false;
    ListNode* slow = head, * fast = head;
    ListNode* temp, * prev = NULL;

    while (fast && fast->next) {
        fast = fast->next->next;
        temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }

    if (fast)
        slow = slow->next;
    while (slow) {
        if (slow->val != prev->val)
            return false;
        slow = slow->next;
        prev = prev->next;
    }
    return true;

}
};