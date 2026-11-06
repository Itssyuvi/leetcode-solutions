class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int ans;
        int temp=original;
        sort(nums.begin(),nums.end());
      

        for(int j=0;j<n;j++){
              
              if(nums[j]==temp){
                temp=nums[j]*2;
                ans=temp;
              }
        }

       
       return ans;
    }
};