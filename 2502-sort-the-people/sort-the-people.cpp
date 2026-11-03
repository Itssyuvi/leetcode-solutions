class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int temp=0;
        int n=heights.size();
        vector<int>nums(heights.begin(),heights.end());
        vector<string>s;

        sort(nums.begin(),nums.end(),greater<int>());
        for(int i=0;i<n;i++){
            temp=nums[i];
            for(int j=0;j<n;j++){
                if(heights[j]==temp){
              s.push_back(names[j]);
                }
            }

        }
        return s;
        
    }
};