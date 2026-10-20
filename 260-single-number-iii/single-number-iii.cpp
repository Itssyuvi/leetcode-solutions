class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {



    unordered_map<int, int> freq;
    vector<int> ans;

    for (int x : nums) {
        freq[x]++;
    }

    for (int x : nums) {
        if (freq[x] == 1) {
            ans.push_back(x);
        }
    }

    return ans;

        
    }
};