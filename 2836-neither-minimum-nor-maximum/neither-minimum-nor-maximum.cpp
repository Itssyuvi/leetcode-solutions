class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n=nums.size();
        int mid=n/2;
        if(n==2||n==1){
            return -1;
        }
        sort(nums.begin(),nums.end());
        int ans=nums[mid];
        return ans;

        
    }
};