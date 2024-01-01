class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n=s.size();
        int m=g.size();
        int j=m-1;
        int i=n-1;
        int count=0;
        while(j>=0 && i>=0){
            if(s[i]>=g[j]){
                count++;
                i--;
                j--;
            }
            else{
                j--;
            }
        }
        return count;

    }
};