class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(map[nums[i]]>n/3){
                ans.push_back(nums[i]);
                map[nums[i]]=0;
            }
        }
        return ans;
        
    }
};