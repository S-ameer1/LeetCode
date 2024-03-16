class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                nums[i]=-1;
            }
        }
        unordered_map<int,int>mp;
        int sum=0;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum==0){
                ans=max(ans,i+1);
            }
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
        }
        if(ans!=INT_MIN)return ans;
        return 0;
    }
};