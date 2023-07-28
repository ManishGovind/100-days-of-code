class Solution
{
public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        int one = 0, two = 0, zero = 0;
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == 0) zero++;
            else if (temp->data == 1) one++;
            else two++;
            temp = temp->next;
        }
        Node* curr = head;
        while ((one || two || zero) and head != NULL) {
            if (zero) {
                head->data = 0;
                zero--;
            }

            else if (one) {
                head->data = 1;
                one--;
            }
            else {
                head->data = 2;
                two--;
            }

            head = head->next;
        }
        return curr;
    }
};