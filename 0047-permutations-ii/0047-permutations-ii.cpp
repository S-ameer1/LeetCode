class Solution {
public:
    vector<vector<int>>ans;
    map<vector<int>,int>map;
    void solve(vector<int>nums,int index){
      if(index>=nums.size()){
        if(map[nums]==0){
        ans.push_back(nums);
        map[nums]=1;
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