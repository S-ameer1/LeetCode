class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
       int n=nums.size();
        int sum=0;
        int target=k;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            sum^=nums[i];
        }
        int ans=0;
        target^=sum;
        while(target>0){
            ans+=target&1;
            target>>=1;
        }
        return ans;
    }
};