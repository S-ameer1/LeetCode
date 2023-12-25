class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        int xorarr2=arr2[0];
        for(int i=1;i<arr2.size();i++){
            xorarr2=xorarr2 ^ arr2[i];
        }

        int xorarr1=arr1[0];
        for(int i=1;i<arr1.size();i++){
            xorarr1=xorarr1 ^ arr1[i];
        }
        return xorarr2&xorarr1;
    }
};