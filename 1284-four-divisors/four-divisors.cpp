
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans = 0;

        for (int x : nums) {
            int sum = 0, count = 0;

            for (int j = 1; j * j <= x; j++) {
                if (x % j == 0) {
                    sum += j;
                    count++;

                    if (j != x / j) {
                        sum += x / j;
                        count++;
                    }
                }

                if (count > 4) break;
            }

            if (count == 4) {
                ans += sum;
            }
        }

        return ans;
    }
};
