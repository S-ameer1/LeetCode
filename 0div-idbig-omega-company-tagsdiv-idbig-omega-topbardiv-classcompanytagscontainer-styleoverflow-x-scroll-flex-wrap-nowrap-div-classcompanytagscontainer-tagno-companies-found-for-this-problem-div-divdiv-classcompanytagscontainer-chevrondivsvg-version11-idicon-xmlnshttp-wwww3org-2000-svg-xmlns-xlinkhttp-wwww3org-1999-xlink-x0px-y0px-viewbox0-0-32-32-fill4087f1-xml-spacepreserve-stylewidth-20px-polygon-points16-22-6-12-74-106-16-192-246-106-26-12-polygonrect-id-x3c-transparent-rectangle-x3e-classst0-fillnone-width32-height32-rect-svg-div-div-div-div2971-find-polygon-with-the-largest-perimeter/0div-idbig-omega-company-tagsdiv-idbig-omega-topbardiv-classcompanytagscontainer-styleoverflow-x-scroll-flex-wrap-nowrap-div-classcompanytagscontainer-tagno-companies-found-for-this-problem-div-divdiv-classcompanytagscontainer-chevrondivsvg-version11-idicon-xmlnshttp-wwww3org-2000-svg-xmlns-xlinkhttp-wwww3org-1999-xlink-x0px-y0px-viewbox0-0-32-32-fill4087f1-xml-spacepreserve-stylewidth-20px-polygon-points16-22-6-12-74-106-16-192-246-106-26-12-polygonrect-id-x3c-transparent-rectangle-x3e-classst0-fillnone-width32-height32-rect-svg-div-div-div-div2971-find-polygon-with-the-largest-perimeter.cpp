class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        if(n<3){
            return -1;
        }
        sort(nums.begin(),nums.end());
        vector<long long>ans(n,0);
        ans[0]=nums[0];
        long long sum=ans[0];
        for(int i=1;i<n;i++){
            ans[i]=sum+nums[i];
            sum=ans[i];
        }
        for(int i=n-1;i>=1;i--){
            if(nums[i]>=ans[i-1]){
                continue;
            }
            else{
                return ans[i];
            }
        }
        return -1;
        
    }
};