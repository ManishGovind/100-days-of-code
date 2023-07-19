/*
Given a Queue Q containing N elements. 
The task is to reverse the Queue. Your task is to complete the function rev(), that reverses the N elements of the queue.
*/

class Solution
{
public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        stack <int>  s;

        while (!q.empty()) {
            s.push(q.front());
            q.pop();
        }

        while (!s.empty()) {
            q.push(s.top());
            s.pop();
        }
        return q;
    }
};