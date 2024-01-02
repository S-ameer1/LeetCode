class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<vector<int>>ans;
        int count=nums.size();
        while(count!=0){
            vector<int>v;
            for(auto &i:map){
                if(i.second>=1){
                    v.push_back(i.first);
                    count--;
                    i.second--;
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};