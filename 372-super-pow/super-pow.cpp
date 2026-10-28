class Solution {
public:
    int superPow(int a, vector<int>& b) {
        int ans = 1;
        a %= 1337;

        for (int digit : b) {
            ans = (1LL * powmod(ans, 10) * powmod(a, digit)) % 1337;
        }

        return ans;
    }

    int powmod(int a, int b) {
        int ans = 1;
        while (b > 0) {
            ans = (1LL * ans * a) % 1337;
            b--;
        }
        return ans;
    }
};