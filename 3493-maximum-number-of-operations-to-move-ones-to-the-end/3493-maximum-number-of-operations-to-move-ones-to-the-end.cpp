class Solution {
public:
    int maxOperations(string s) {
        int n=s.size();
        int ans=0;
        int ones=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                ans+=ones;
                while(s[i]=='0' && i<n){
                    i++;
                }
            }
                ones++;
        }
        return ans;
    }
};