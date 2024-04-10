class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        vector<int>ans(n,0);
        queue<int>q;
        for(int i=0;i<n;i++){
            q.push(i);
        }
        int j=0;
        while(!q.empty()){
            int ind=q.front();
            q.pop();
            ans[ind]=deck[j];
            j++;
            int sec=q.front();
            q.pop();
            q.push(sec);
        }

        return ans;
        
    }
};