class Solution {
public:
    string reorganizeString(string s) {
        vector<int> fre(26, 0);
        for (char c : s) {
            fre[c - 'a'] = fre[c - 'a'] + 1;
        }
        int mx = -1;
        int mxi = 0;

        for (int i = 0; i < s.size(); i++) {
            if (fre[s[i] - 'a'] > mx) {
                mx = fre[s[i] - 'a'];
                mxi = s[i] - 'a';
            }
        }
        if (mx > ((s.size() + 1) / 2))
        {
            return "";
        }

        int i = 0;
        while (fre[mxi]) {
            s[i] = char(mxi + 'a');
            i += 2;
            fre[mxi]--;
        }

        for (int j = 0; j < 26; j++) {

            while (fre[j]--) {
                if (i >= s.size()) i = 1;
                s[i] = char(j + 'a');
                i += 2;
            }
        }
        return s;


        //  Max heap ordered by character counts
        // priority_queue<pair<int, int>> q;
        // for (int i = 0; i < 26; i++) {
        //     if (fre[i] > 0) {
        //         q.push({fre[i], i + 'a'});
        //     }
        // }

        // string res;
        // while (!q.empty()) {
        //     auto first = q.top();
        //     q.pop();
        //     if (res.empty() || first.second != res.back()) {
        //         res += char(first.second);
        //         if (--first.first > 0) {
        //             q.push(first);
        //         }
        //     } else {
        //         if (q.empty()) {
        //             return "";
        //         }
        //         auto second = q.top();
        //         q.pop();
        //         res += char(second.second);
        //         if (--second.first > 0) {
        //             q.push(second);
        //         }
        //         q.push(first);
        //     }
        // }

        // return res;
    }
};