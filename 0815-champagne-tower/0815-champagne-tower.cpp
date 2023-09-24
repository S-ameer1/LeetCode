class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> arr(101, vector<double>(101, 0.0));
        arr[0][0] = poured;
        for(int i=0;i<100;i++) {
            bool liqleft = false;
            for(int j=0;j<=i;j++) {
                double cq = (arr[i][j] - 1)/2;
                if(cq <= 0) continue;
                liqleft = true;
                arr[i+1][j] += cq;
                arr[i+1][j+1] += cq;
            }
            if(!liqleft) break;
        }
        return min(1.0, arr[query_row][query_glass]);
    
    }
};