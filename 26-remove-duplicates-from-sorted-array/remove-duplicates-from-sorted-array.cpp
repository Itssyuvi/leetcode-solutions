class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

  if(nums.size()==0)
  return 0;

  int n=nums.size();

  int index=1,i;

  for(i=1;i<n;i++){

    if(nums[i]!=nums[i-1]){

        nums[index]=nums[i];
        index++;
    }
  }
  return index;
        
    }
};