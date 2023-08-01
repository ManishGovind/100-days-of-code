class Solution
{
public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack <char> s;

        for (char c : x) {

            if (c == '(' || c == '{' || c == '[') {
                s.push(c);
            }
            else {
                if (s.empty()) return false;
                char top = s.top();

                if (top == '(' and c == ')' || top == '{' and c == '}' || top == '[' and c == ']') {
                    s.pop();
                }
                else {
                    return false;
                }
            }
        }

        return s.empty();
    }

};