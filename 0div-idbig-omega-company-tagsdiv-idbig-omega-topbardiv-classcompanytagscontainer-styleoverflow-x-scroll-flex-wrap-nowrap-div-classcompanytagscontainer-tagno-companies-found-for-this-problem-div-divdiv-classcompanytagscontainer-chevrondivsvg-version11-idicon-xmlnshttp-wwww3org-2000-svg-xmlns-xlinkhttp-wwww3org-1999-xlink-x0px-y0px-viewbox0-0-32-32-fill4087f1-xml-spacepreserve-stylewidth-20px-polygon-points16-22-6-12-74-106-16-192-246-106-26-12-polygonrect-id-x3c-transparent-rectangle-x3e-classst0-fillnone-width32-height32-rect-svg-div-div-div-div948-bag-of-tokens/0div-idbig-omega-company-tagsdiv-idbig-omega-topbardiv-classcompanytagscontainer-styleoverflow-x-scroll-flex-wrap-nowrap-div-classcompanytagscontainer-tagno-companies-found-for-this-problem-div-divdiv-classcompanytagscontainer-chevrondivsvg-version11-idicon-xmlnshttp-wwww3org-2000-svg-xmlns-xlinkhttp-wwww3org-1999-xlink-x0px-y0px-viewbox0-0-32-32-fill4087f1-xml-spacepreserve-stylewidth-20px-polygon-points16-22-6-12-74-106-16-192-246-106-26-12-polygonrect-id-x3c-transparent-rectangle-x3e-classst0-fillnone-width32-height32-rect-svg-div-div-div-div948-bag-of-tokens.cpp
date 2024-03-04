class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n=tokens.size();
        int score=0;
        int ans=0;
        sort(tokens.begin(),tokens.end());
        if(n==0 || power<tokens[0]){
            return 0;
        }
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]<=power){
                score++;
                power-=tokens[i];
            }
            else if(i!=tokens.size()-1){
                power+=tokens[tokens.size()-1];
                score--;
                tokens.pop_back();
                if(power>=tokens[i]){
                    score++;
                    power-=tokens[i];
                }
            }
            ans=max(ans,score);
        }
        return ans;
    }
};