class Solution {
public:
    int minimumChairs(string s) {
        int n=s.size();
        int ans=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='E'){
                count++;
            }
            else{
                count--;
            }
            ans=max(count,ans);
        }
        return ans;
    }
};