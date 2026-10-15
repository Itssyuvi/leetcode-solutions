class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
          int largest = *max_element(nums.begin(), nums.end());
          int count=1;
          for(int i=0;i<n;i++){
            if(nums[i]==largest){
                ans=i;
            }
            if(largest>=nums[i]*2&& nums[i]!=largest){
                count++;
            }
          }

     if(count==n){
        return ans;
     }
    
    return -1;

        
    }
};