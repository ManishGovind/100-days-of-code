class Solution {
public:
    int hammingWeight(uint32_t n) {
        std::string binary_string = std::bitset<32>(n).to_string();
        int cnt = 0;
        for (int i = 31; i >= 0; i--) {
            if (binary_string[i] == '1') {
                cnt++;
            }
        }
        return cnt;
    }
};