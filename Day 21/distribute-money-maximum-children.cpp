class Solution {
public:
    int distMoney(int money, int children) {

        if (money < children) {
            return -1;
        }
        money -= children;
        if (money < 7)return 0;
        if (money == children * 7)return children;
        if (money <= 7 * (children - 1) + 2) return  money / 7;
        money -= 7 * (children - 1);
        if (money == 3)return children - 2;
        return children - 1;
    }
};