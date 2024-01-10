class Solution {
public:
    vector<vector<string>>ans;
    
    void help(string s,int ind,vector<string>&path){
        if(ind==s.size()){
            ans.push_back(path);
            return ;
        }
        for(int i=ind;i<s.size();i++){
            if(ispalind(s,ind,i)){
                path.push_back(s.substr(ind,i-ind+1));
                help(s,i+1,path);
                path.pop_back();
            }
        }
    }

    bool ispalind(string s,int ind,int i){
        while(ind<=i){
            if(s[ind]!=s[i]){
                return 0;
            }
            ind++;
            i--;
        }
        return 1;
    }

    vector<vector<string>> partition(string s) {
       vector<string>path;
       help(s,0,path);
       return ans;
    }
};