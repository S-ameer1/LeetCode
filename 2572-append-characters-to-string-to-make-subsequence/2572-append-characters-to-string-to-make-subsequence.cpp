class Solution {
public:
    int appendCharacters(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0;
        int ans=0;
        for(int i=0;i<m;i++){
            while(j<n){
                if(t[i]==s[j]){
                    ans++;
                    j++;
                    break;
                }
                else{
                    j++;
                }
            }
            if(j>=n){
                break;
            }
        }
        return m-ans;
    }
};