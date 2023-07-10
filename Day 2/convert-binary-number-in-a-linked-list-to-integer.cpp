class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int cnt = 0;
        while (temp) {
            temp = temp->next;
            cnt++;
        }
        int res = 0;
        while (cnt--) {
            res += (pow(2, cnt) * head->val);
            head = head->next;
        }
        return res;
    }
};