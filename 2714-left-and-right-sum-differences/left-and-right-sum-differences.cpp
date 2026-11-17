
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n = nums.size();

        int temp1 = 0, temp2 = 0;

        vector<int> num1;
        vector<int> num2;
        vector<int> ans;

        
        for(int i = 0; i < n; i++) {

            num1.push_back(temp1);
            num2.push_back(temp2);

            temp1 += nums[i];
            temp2 += nums[n-1-i];
        }

      
        for(int i = 0; i < n; i++) {

            ans.push_back(abs(num1[i] - num2[n-i-1]));
        }

        return ans;
    }
};
