//User function Template for C++

class Solution {
public:

    void dfsutil(stack<int>& s, int X) {
        if (s.empty()) { s.push(X); return; }

        int temp = s.top();
        s.pop();
        dfsutil(s, X);
        s.push(temp);
        return;
    }
    stack<int> insertAtBottom(stack<int> St, int X) {
        dfsutil(St, X);
        return St;
    }

    // stack<int> insertAtBottom(stack<int>& St,int X){
    //      if(St.empty())
    //     {
    //         St.push(X);
    //         return St;
    //     }
    //   int temp= St.top();
    //   St.pop();
    //   insertAtBottom (St,X);
    //   St.push(temp);
    //   return St;
    // }
};