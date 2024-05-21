class Solution {
public:
    vector<vector<int>>ans;
    void help(int i,int n,vector<int>&nums,vector<int>&v){
        if(i==n){
            ans.push_back(v);
            return ;
        }
        v.push_back(nums[i]);
        help(i+1,n,nums,v);
        v.pop_back();
        help(i+1,n,nums,v);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>v;
        int n=nums.size();
        help(0,n,nums,v);
        return ans;
    }
};