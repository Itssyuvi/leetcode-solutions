class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int n=candies.size();
        vector<bool>ans;
        int sum=0;
        bool temp;
        for(int i=0;i<n;i++){
             sum=extraCandies+candies[i];
            for(int j=0;j<n;j++){
               if(candies[j]<=sum){
                temp=true;
               }
               else{
                temp=false;
                break;
               }
            }
            ans.push_back(temp);
            sum=0;
        }
        
        

     return ans;


    }
};