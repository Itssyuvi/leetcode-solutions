class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        int ans;
        int temp=original;
       for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
              
              if(nums[j]==temp){
                temp=nums[j]*2;
                ans=temp;
              }
        }

       }
       return ans;
    }
};