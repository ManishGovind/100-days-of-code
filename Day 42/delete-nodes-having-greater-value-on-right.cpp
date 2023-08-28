
/*
delete nodes having greater value on right of the node
*/

class Solution
{
public:

    Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;

        while (curr) {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;

        }
        return prev; // Return the new head of the reversed list
    }

    Node* compute(Node* head)
    {
        Node* ptr = reverse(head);
        Node* curr = ptr;
        while (curr->next != nullptr) {
            if (curr->data > curr->next->data) {
                curr->next = curr->next->next;
            }
            else {
                curr = curr->next;
            }
        }
        return reverse(ptr);
    }

};