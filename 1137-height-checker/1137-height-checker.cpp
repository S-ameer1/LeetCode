class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ans;
        for(int i=0;i<heights.size();i++){
            ans.push_back(heights[i]);
        }
        int count=0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<heights.size();i++){
            if(ans[i]!=heights[i]){
                count++;
            }
        }
        return count;

        
    }
};