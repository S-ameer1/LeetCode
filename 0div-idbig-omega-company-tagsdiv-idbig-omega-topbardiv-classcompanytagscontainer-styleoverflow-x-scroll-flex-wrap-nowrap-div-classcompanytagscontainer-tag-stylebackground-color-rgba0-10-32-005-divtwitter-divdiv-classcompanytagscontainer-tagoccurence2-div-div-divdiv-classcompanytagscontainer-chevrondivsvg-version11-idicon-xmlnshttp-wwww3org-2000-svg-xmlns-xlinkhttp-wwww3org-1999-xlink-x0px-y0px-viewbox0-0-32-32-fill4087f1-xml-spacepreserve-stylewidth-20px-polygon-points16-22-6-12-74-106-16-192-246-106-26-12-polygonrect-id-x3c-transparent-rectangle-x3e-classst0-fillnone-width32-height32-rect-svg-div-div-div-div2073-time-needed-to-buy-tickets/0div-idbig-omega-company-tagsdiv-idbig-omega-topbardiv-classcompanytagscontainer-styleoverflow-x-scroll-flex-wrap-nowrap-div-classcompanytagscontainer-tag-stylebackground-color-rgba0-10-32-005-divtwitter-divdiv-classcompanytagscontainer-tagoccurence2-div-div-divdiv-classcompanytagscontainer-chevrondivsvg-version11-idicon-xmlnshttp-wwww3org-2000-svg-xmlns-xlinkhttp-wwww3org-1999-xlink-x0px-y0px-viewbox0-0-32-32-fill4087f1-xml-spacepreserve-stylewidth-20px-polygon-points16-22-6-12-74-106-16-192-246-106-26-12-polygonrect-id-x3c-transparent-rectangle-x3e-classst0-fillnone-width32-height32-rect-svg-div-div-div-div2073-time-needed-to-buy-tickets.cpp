class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int n=t.size();
        int ans=0;
        int val=t[k];
        for(int i=0;i<n;i++){
            if(i<=k){
                ans+=min(val,t[i]);
            }
            else{
                ans+=min(val-1,t[i]);
            }
        }
        return ans;
    }

};