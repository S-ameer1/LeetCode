class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>map;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            if(map[nums[i]]>=2){
                ans=nums[i];
                break;
            }
        }
        return ans;
        
    }
};