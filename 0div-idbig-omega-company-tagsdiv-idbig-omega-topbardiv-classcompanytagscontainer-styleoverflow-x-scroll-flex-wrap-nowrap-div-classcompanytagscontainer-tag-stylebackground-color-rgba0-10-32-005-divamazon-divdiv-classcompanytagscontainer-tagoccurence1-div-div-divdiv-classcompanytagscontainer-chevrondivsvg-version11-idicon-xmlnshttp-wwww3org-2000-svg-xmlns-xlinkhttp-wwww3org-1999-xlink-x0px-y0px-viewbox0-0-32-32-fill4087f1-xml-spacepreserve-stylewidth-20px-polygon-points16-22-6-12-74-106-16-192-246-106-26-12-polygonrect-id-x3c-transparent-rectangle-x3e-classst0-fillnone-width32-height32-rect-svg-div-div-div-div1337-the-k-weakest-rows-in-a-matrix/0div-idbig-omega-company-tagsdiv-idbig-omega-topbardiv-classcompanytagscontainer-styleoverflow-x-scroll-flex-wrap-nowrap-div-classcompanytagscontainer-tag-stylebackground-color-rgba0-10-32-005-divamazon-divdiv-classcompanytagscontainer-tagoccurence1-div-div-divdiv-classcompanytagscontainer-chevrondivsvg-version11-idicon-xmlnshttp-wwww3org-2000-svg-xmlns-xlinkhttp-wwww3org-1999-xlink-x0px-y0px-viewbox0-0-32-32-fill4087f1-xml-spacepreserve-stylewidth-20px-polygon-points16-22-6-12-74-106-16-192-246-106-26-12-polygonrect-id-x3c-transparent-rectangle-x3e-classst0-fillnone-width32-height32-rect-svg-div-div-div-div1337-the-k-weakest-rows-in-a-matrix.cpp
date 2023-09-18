class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        vector<pair<int,int>>temp;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            pair<int,int>p={count,i};
            temp.push_back(p);

        }
        sort(temp.begin(),temp.end());

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};