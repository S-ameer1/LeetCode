class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]>ans && mp.find(-nums[i])!=mp.end()){
                ans=nums[i];
            }
        }
        return ans==INT_MIN?-1:ans;
    }
};