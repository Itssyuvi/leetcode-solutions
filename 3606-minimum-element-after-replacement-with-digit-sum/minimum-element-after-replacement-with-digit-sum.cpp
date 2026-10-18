class Solution {
public:
    int minElement(vector<int>& nums) {

        int n=nums.size();
        int sum=0;
        vector<int>ans;

        for(int i=0;i<n;i++){

            int temp=nums[i];
           
            while(temp>0){
                int rem=temp%10;
                sum=sum+rem;
                temp=temp/10;
            }
            ans.push_back(sum);
            sum=0;
            temp=0;
        }
        int mini = *min_element(ans.begin(), ans.end());
        return mini;
        
    }
};