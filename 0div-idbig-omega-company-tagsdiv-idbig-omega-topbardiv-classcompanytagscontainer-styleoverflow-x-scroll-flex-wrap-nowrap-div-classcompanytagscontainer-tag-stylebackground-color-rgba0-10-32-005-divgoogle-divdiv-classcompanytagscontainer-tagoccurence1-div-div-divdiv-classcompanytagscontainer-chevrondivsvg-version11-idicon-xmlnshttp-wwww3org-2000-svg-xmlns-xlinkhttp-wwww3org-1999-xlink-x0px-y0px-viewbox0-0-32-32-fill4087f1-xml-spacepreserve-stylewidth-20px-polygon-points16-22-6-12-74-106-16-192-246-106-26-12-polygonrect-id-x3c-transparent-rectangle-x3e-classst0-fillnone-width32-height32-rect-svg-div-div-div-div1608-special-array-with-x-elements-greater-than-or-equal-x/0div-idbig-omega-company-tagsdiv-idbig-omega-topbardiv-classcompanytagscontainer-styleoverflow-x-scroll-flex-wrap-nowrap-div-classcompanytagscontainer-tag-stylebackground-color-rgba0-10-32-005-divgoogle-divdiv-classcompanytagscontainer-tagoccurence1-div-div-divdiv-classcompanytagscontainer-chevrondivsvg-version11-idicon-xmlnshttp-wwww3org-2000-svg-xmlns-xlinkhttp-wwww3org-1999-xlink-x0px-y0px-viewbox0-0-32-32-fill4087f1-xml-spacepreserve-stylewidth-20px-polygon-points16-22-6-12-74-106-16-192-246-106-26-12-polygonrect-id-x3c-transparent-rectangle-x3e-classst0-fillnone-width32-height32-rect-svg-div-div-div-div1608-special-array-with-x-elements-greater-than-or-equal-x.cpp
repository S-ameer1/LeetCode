class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(nums[0]>=n){
            return n;
        }
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(nums[i]>=ans){
                ans++;
                if(ans>nums[i]){
                    return -1;
                }
            }
            else {
                return ans;
            }
        }
        return -1;
    }
};