class Solution {

public:

    unordered_map<Node*, Node*> mp;

    Node* copyRandomList(Node* head) {

        if (head == NULL)

            return NULL;

        if (mp.count(head))

            return mp[head];

        Node* newNode = new Node(head->val);

        mp[head] = newNode;

        newNode->next = copyRandomList(head->next);

        newNode->random = copyRandomList(head->random);

        return newNode;

    }

};