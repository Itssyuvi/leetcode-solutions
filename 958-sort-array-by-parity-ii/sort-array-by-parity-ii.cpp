class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i%2==0&&nums[j]%2==0){
                    ans.push_back(nums[j]);

                   nums.erase(nums.begin() + j);
                    break;
                }
                else if(i%2!=0&&nums[j]%2!=0){ 
                    ans.push_back(nums[j]);

                  nums.erase(nums.begin() + j);
                    break;
                }
            }
        }
        return ans;
    }
};