class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int n=s.size();
        int w=words.size();
        map<char,vector<int>>m;
        for(int i=0;i<n;i++){
            m[s[i]].push_back(i);
        }
        int count=0;
        for(int i=0;i<w;i++){
            string curr=words[i];
            int latest=-1;
            for(int j=0;j<curr.size();j++){
                auto it=upper_bound(m[curr[j]].begin(),m[curr[j]].end(),latest);
                if(it==m[curr[j]].end()){
                    break;
                }
                latest=*it;
                if(j==curr.size()-1) count++;

            }
        }
        return count;
    }
};