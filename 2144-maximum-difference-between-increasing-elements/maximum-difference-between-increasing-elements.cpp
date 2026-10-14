class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int ans=0,temp;

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                temp=nums[j]-nums[i];
                if(temp>ans&&j>i){
                    ans=temp;
                    
                }
               
            temp=0;
            }
        }
        if(ans>0){
            return ans;
        }
        else{
            return -1;
        }
    }
};