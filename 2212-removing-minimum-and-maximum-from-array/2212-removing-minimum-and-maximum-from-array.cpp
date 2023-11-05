class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int minind=-1;
        int maxi=INT_MIN;
        int maxind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<mini){
                mini=nums[i];
                minind=i;
            }
            if(nums[i]>maxi){
                maxi=nums[i];
                maxind=i;
            }
        }
        int m1,m2,m3;
        m1=max(minind,maxind)+1;
        m2=n-min(minind,maxind);
        if(maxind<minind){
            m3=maxind+1+(n-minind);
        }
        else{
            m3=minind+1+(n-maxind);
        }
        return min(m1,min(m2,m3));
    }
};