class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        
         map<int, int> freq;
         int n=arr.size();
         int ans=0;
            
        for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
         }
     

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
       if(arr[i]==freq[arr[i]]){
      ans=arr[i];
       }
    }
    if(ans==0){
        return -1;
    }

   return ans;

    }
};