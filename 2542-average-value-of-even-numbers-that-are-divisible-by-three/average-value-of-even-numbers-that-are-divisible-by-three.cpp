class Solution {
public:
    int averageValue(vector<int>& nums) {

        int n=nums.size();
        int count=0;
           int ans;
        int sum=0;
        for(int i=0;i<n;i++){
            if(nums[i]%3==0&&nums[i]%2==0){
                sum=sum+nums[i];
                count++;
            }
        }
        if(count==0){
            ans=0;
        }else{
       ans=sum/count;
        }
  
        return ans;
    }
};