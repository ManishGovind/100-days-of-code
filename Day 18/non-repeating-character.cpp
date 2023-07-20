
class Solution
{
public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        //   int fre[26] ={0};
        //   for(char c : S){
        //       fre[c-'a']++;
        //   }


        //   for(char c : S){
        //       if(fre[c-'a'] == 1){
        //           return c;
        //       }
        //   }
        //   return '$';


        queue<char> q;
        char res;
        vector<int> fre(26, 0);
        for (char c : S) {
            fre[c - 'a']++;
            if (fre[c - 'a'] == 1) q.push(c);
            while (!q.empty() && fre[q.front() - 'a'] > 1) {
                q.pop();
            }

        }
        if (q.empty()) return '$';
        else {
            return q.front();
        }

    }

};