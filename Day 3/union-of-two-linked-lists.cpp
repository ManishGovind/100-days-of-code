class Solution
{
public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here

        struct Node* head = NULL;
        struct Node* temp = head;

        while (head1 != NULL and head2 != NULL) {

            if (head1->data <= head2->data) {
                temp->next = head1;
                head1 = head1->next;
            }
            else {
                temp->next = head2;
            }

            temp = temp->next;
            head2 = head2->next;
        }

        while (head1 != NULL and head2 == NULL) {

            temp->next = head1;
            temp = temp->next;
            head1 = head1->next;

        }

        while (head2 != NULL and head1 == NULL) {
            temp->next = head2;
            temp = temp->next;
            head2 = head2->next;


        }
        return head->next;

    }
};