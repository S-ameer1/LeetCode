class Solution {
public:

    int countSubstrings(string s) {
        int count1=0;
        int count2=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int l=i;
            int r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                count1++;
                l--;
                r++;
            }
        }
        for(int i=0;i<n;i++){
            int l=i;
            int r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                count2++;
                l--;
                r++;
            }
        }
        return count1+count2;
    }
};