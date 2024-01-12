class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>s;
    void solve(vector<int>nums,int index){
      if(index>=nums.size()){
       if(!s.count(nums)){
            ans.push_back(nums);
            s.insert(nums);
        }
        return ;
      }
      for(int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(nums,index+1);
        swap(nums[index],nums[i]);


      }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      int index=0;
      solve(nums,index);
      return ans;
        
    }
};