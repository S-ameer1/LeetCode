class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
            if(map[nums[i]]>=2){
                ans.push_back(nums[i]);
            }
        }
        for(int i=1;i<=n;i++){
            if(map[i]==0){
                ans.push_back(i);
            }
        }
        return ans;

    }
};