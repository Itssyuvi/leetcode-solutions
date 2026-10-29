class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int i = 1; i < n; i++) {
            int j = n - i;

            int a = i;
            int b = j;
            bool foundZero = false;

            while (a > 0 || b > 0) {
                if (a > 0 && a % 10 == 0) {
                    foundZero = true;
                    break;
                }

                if (b > 0 && b % 10 == 0) {
                    foundZero = true;
                    break;
                }

                a /= 10;
                b /= 10;
            }

            if (!foundZero) {
                return {i, j};
            }
        }

        return {};
    }
};