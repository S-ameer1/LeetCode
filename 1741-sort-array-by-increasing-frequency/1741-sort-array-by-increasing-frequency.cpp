class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        map<int,vector<int>>m;
        for(auto i:mp){
            m[i.second].push_back(i.first);
        }
        int i=0;
        for(auto i:m){
            int s=i.second.size();
            if(s>1){
                sort(i.second.rbegin(),i.second.rend());
            }
            for(auto j:i.second){
                for(int k=0;k<i.first;k++){
                    ans.push_back(j);
                }
            }

        }
        return ans;

    }
};