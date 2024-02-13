class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int n=words.size();
        for(int i=0;i<n;i++){
            int s=0;
            int e=words[i].size()-1;
            while(s<=e){
                if(words[i][s]!=words[i][e]){
                    break;
                }
                s++;
                e--;
            }
            if(s>e){
                return words[i];
            }
        }
        return "";
    }
};