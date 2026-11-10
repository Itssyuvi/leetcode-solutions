class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> freq;
        vector<int> ans;

        
        for (int x : arr) {
            freq[x]++;
        }

        
        for (auto x : freq) {
            ans.push_back(x.second);
        }

        
        sort(ans.begin(), ans.end());

        
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i - 1] == ans[i]) {
                return false;
            }
        }

        return true;
    }
};