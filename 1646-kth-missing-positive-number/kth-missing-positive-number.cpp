class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int maxi = *max_element(arr.begin(), arr.end());
        int i=1,j=0;
        int ans=0;
        int n=arr.size();
        while( j<n&&k>0){
            
            if(i==arr[j]){
                i++;
                j++;
            }
            else{
                ans=i;
                i++;
                k--;
            }
        }
       if(k!=0){
        ans=maxi+k;
       }

       
   return ans;
        
    }
};