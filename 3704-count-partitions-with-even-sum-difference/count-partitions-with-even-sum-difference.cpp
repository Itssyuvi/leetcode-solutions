class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int sum1=0,sum2=0;
        int temp,ans=0;
        for(int i=0;i<n-1;i++){
            sum1=sum1+nums[i];
            for(int j=i+1;j<n;j++){
                 sum2=sum2+nums[j];

            }
            temp=sum1-sum2;
            if(temp%2==0){
                 
                    ans++;
                 

            }
            sum2=0;
        }
        return ans;
    }
};