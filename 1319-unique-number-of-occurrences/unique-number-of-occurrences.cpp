class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq;
        vector<int> ans;

        // Step 1: Calculate frequency
        for (int x : arr) {
            freq[x]++;
        }

        // Step 2: Store each distinct element's frequency
        for (auto x : freq) {
            ans.push_back(x.second);
        }

        // Step 3: Sort frequencies
        sort(ans.begin(), ans.end());

        // Step 4: Check duplicate frequencies
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i - 1] == ans[i]) {
                return false;
            }
        }

        return true;
    }
};