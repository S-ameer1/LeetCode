class Solution {
public:

    vector<int> getGoodIndices(vector<vector<int>>& v, int target) {
        vector<int> ans;
        int n = v.size();

        for (int i = 0; i < n; i++) {
            int a = v[i][0];
            int b = v[i][1];
            int c = v[i][2];
            int m = v[i][3];
            int x=1;
            for (int j = 0; j < b; j++) {
                x = (x * a)%10;
            }
            
            int y = 1;
            for (int j = 0; j < c; j++) {
                y = (y * x) % m;
            }

            if (y == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};