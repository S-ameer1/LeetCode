class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        if(left.size()==0 && right.size()==0){
            return 0;
        }
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        int leftm=0;
        if(left.size()!=0){
           leftm=left[left.size()-1];
        }
        int rightm=0;
        if(right.size()!=0){
        rightm=n-right[0];
        }
        return max(leftm,rightm);

    }
};