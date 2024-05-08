class Solution {
public:
    vector<string>findRelativeRanks(vector<int>& score) {
        vector<string>ans;
        priority_queue<int>pq;
        unordered_map<int,int>mp;
        for(int i=0;i<score.size();i++){
            pq.push(score[i]);
        }
        int r=1;
        while(pq.size()!=0){
            mp[pq.top()]=r;
            r++;
            pq.pop();
        }
        for(int i=0;i<score.size();i++){
            int rank=mp[score[i]];
            if(rank==1){
                ans.push_back("Gold Medal");
                pq.pop();
            }
            else if(rank==2){
                ans.push_back("Silver Medal");
                pq.pop();
            }
            else if(rank==3){
                ans.push_back("Bronze Medal");
                pq.pop();
            }
            else{
                string s=to_string(rank);
                ans.push_back(s);
                pq.pop();
            }
        }
        return ans;
    }
};