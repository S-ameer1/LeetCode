class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
            maxi=max(maxi,m[nums[i]]);
        }
        int count=0;
        for(auto i:m){
            if(i.second==maxi){
                count+=i.second;
            }
        }
        return count;
        
        
    }
};