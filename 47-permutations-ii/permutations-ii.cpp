class Solution {
public:
       bool findDuplicate(vector<int>nums,int i,int j){
        for(int k=i+1;k<=j;k++){
            if(nums[k]==nums[i]){
                return true;
            }

        }
        return false;
       }
    
  
  void solve(vector<int>nums,int i,vector<vector<int>>&ans){
      if(i==nums.size()){
            ans.push_back(nums);
            return;
        }
      
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            if(!findDuplicate(nums,i,j)){
                solve(nums,i+1,ans);
            }
            swap(nums[i],nums[j]);
            }
            
  }
    vector<vector<int>> permuteUnique(vector<int>& nums) {

        vector<vector<int>>ans;
        solve(nums,0,ans);
        return ans;   
    }
};