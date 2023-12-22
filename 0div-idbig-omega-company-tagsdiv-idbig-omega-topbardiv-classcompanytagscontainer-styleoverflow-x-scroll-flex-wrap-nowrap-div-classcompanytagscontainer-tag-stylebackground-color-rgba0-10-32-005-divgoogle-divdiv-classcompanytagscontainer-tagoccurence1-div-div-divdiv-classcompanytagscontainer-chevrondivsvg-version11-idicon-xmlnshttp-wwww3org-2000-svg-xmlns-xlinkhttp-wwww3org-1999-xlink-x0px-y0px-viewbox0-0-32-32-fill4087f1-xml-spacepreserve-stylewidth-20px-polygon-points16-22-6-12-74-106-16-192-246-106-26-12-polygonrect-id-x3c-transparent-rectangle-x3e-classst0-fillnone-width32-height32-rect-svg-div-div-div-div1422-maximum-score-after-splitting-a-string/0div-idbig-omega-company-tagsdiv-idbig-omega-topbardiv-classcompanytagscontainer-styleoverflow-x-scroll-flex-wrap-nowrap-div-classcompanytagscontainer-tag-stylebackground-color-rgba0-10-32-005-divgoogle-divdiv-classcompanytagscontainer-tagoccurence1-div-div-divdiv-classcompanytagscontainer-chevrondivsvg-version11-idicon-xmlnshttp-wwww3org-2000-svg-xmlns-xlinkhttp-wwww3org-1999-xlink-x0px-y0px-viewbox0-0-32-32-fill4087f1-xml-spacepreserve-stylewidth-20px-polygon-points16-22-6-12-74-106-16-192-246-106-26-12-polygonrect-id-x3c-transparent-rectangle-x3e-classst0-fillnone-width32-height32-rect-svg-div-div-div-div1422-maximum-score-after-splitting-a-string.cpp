class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int zeroes=0;
        int ones=0;
        int ans=INT_MIN;
        int totalone=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                totalone++;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                zeroes++;
                ans=max(ans,zeroes+(totalone-ones));
            }
            else{
                ones++;
                ans=max(ans,zeroes+(totalone-ones));

            }
        }
        return ans;

    }
};