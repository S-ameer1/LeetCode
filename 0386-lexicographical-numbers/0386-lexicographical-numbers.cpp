class Solution {
public:
    vector<int> lexicalOrder(int n) {
    vector<string>ans;
        for(int i=1;i<=n;i++){
            string temp=to_string(i);
            ans.push_back(temp);
        }
        sort(ans.begin(),ans.end());
        vector<int>answer;
        for(int i=0;i<ans.size();i++){
            int temp=stoi(ans[i]);
            answer.push_back(temp);
        }
        return answer;
        
    }
};