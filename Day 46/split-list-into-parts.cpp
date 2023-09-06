class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        // count the nodes 
        ListNode* curr = head;
        int count = 0;
        while (curr) {
            curr = curr->next;
            count++;
        }

        int part_size = count / k, re = count % k;

        curr = head;
        vector<ListNode*> res;
        for (int i = 0; i < k; i++) {
            ListNode* temp = curr;
            for (int j = 0; j < part_size + (i < re ? 1 : 0) - 1; j++) {
                if (curr) {
                    curr = curr->next;
                }
            }
            if (curr) {
                ListNode* pre = curr;
                curr = curr->next;
                pre->next = NULL;
            }

            res.push_back(temp);
        }

        return res;
    }
};