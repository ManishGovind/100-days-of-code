


Node* deleteNode(Node* head, int x)
{
    //Your code here


    int count = 1;
    Node* temp = head;
    while (temp != NULL)
    {
        if (x == 1)
        {
            head = temp->next;
            break;
        }
        if (count + 1 == x)
        {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
        count++;
    }
    return head;
}
