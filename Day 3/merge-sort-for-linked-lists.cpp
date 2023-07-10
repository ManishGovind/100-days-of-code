class Solution {
public:
    //Function to sort the given linked list using Merge Sort.
    Node* Sortedmerge(Node* a, Node* b) {
        // your code here
        Node* result = NULL;
        if (a == NULL)
            return b;
        if (b == NULL)
            return a;


        if (a->data <= b->data) {
            result = a;
            result->next = Sortedmerge(a->next, b);
        }
        else {
            result = b;
            result->next = Sortedmerge(a, b->next);
        }



        return result;

    }

    Node* mergeSort(Node* head) {
        // your code here
        if (!head or !head->next)
            return head;

        Node* temp = NULL;
        Node* slow = head;
        Node* fast = head;
        while (fast and fast->next) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        temp->next = NULL;
        Node* s = mergeSort(head);
        Node* f = mergeSort(slow);
        return Sortedmerge(s, f);
    }
};