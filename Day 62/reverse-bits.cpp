class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        std::string bin = std::bitset<32>(n).to_string();

        uint32_t num = 0;

        for (int i = 31; i >= 0; i--) {
            if (bin[i] == '1') {
                num = num + std::pow(2, i);
            }

        }

        return num;

    }
};