class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count=1,temp;
        if(nums[0]<nums[n-1]){
            for(int i=1;i<n;i++){
             if(nums[i-1]<=nums[i]){
                count++;
             }
            }
        }
        else{
            for(int i=1;i<n;i++){
             if(nums[i-1]>=nums[i]){
                count++;
             }
            }
             }


        
        
        if(count==n){
            return true;
        }

        return false;
    }
};