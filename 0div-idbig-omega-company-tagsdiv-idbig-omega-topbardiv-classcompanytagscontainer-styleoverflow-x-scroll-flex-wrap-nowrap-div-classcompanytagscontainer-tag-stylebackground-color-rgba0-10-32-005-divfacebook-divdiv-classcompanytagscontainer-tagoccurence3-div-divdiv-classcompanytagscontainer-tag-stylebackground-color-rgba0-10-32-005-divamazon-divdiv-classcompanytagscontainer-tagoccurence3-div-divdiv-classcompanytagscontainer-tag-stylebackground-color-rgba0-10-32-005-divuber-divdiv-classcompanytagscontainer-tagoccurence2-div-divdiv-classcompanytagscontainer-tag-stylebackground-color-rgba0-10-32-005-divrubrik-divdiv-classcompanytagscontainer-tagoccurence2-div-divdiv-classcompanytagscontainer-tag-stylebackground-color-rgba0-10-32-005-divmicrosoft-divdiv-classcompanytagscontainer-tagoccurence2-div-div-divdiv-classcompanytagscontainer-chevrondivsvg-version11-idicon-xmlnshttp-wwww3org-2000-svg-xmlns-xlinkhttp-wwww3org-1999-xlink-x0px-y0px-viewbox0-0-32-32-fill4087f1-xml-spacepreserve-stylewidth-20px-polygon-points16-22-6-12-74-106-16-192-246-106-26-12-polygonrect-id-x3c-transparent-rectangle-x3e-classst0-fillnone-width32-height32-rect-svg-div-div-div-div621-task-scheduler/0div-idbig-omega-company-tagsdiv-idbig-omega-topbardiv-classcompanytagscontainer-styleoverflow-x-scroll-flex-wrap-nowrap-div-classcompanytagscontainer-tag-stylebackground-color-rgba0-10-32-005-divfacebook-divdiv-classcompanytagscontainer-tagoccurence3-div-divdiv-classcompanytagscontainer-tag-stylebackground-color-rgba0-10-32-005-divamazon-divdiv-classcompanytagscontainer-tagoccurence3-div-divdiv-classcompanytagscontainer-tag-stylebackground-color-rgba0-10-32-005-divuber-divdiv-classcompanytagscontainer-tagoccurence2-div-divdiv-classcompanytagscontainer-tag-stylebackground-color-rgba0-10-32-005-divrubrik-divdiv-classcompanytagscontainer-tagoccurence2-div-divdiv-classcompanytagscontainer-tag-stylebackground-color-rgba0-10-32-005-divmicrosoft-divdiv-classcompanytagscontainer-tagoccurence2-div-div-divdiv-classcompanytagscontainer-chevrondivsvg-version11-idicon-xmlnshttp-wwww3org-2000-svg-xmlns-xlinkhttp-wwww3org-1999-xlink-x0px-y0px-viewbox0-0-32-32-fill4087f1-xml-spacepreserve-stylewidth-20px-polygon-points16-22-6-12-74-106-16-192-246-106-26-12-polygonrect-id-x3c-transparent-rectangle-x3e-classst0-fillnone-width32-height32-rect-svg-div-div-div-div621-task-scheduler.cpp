class Solution {
public:
    int leastInterval(vector<char>& t, int n) {
        int m=t.size();
        vector<int>count(26,0);
        for(int i=0;i<m;i++){
            count[t[i]-'A']++;
        }
        sort(count.begin(),count.end());
        int chunk=count[25]-1;
        int totalspace=chunk*n;
        for(int i=24;i>=0;i--){
            totalspace-=min(chunk,count[i]);
        }
        if(totalspace<0){
            return m;
        }
        return m+totalspace;
    }
};