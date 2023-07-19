/*

Bob is very fond of balloons. Once he visited an amusement park with his mother. The mother told Bob that she would buy him a balloon only if he answer her problem right. She gave Bob a string s and asked him to use the characters of string to form as many instances of the word "balloon" as possible. Return the maximum number of instances that can be formed.

Help Bob to solve the problem.

Note: You can use each character in the string at most once.
*/

class Solution {
public:
    int maxInstance(string s) {

        unordered_map<char, int>mp;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'b' || s[i] == 'a' || s[i] == 'l' || s[i] == 'o' || s[i] == 'n') {
                mp[s[i]]++;
            }

        }

        if (mp.find('b') == mp.end() || mp.find('a') == mp.end() || mp.find('l') == mp.end() || mp.find('o') == mp.end() || mp.find('n') == mp.end()) { return 0; }
        mp['o'] = mp['o'] / 2;
        mp['l'] = mp['l'] / 2;

        int res = INT_MAX;
        for (auto it : mp) {
            res = min(res, it.second);
        }
        return res == INT_MAX ? 0 : res;
    }
};