class Solution
{
public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>& s, int sizeOfStack)
    {
        // code here..
        stack<int> ns;
        int mid = (sizeOfStack % 2 == 0) ? (sizeOfStack / 2) : ceil((sizeOfStack - 1) / 2);
        while (mid--) {
            int top = s.top();
            s.pop();
            ns.push(top);
        }
        s.pop();
        while (!ns.empty()) {
            int top = ns.top();
            ns.pop();
            s.push(top);
        }
    }
};

// recursion


class Solution
{
public:
    //Function to delete middle element of a stack.
    void util(stack<int>& s, int sizeOfStack, int cnt)
    {

        if (cnt == sizeOfStack / 2)
        {
            s.pop();
            return;
        }
        int x = s.top();
        s.pop();
        cnt++;
        util(s, sizeOfStack, cnt);
        s.push(x);
    }
    void deleteMid(stack<int>& s, int sizeOfStack)
    {
        util(s, sizeOfStack, 0);
    }
};