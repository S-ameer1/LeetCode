class Solution {
public:
    vector<int>ans;

    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int SizePoints=points.size();
        int SizeQueries=queries.size();
        for(int i=0;i<SizeQueries;i++){
            int count=0;
            for(int j=0;j<SizePoints;j++){
             float xd=(points[j][0]-queries[i][0])*(points[j][0]-queries[i][0]);
             float yd=(points[j][1]-queries[i][1])*(points[j][1]-queries[i][1]);
             float distance=sqrt(xd+yd);
             if(distance<=queries[i][2]){
                 count++;
             }

            }
            ans.push_back(count);

        }
        return ans;
    }
};