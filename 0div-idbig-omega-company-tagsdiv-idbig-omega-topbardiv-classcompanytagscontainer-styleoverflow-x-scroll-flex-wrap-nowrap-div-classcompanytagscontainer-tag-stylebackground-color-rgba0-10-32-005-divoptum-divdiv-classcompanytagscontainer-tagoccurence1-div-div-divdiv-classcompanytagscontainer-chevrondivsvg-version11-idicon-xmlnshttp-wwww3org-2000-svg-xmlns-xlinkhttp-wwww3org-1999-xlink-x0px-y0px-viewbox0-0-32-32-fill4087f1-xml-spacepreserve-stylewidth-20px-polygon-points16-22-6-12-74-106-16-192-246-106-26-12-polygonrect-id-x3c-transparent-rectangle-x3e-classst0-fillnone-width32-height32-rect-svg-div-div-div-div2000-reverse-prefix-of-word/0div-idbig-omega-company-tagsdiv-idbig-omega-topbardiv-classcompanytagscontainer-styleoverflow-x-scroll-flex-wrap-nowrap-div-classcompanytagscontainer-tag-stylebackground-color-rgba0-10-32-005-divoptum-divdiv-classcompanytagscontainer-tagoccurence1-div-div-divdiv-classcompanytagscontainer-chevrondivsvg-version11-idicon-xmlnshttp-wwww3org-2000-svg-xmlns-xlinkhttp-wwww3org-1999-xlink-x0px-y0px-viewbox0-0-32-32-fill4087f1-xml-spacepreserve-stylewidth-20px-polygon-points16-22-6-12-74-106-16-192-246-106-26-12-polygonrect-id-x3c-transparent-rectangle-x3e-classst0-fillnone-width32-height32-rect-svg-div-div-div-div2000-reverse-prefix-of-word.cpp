class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="";
        bool f=0;
        for(int i=0;i<word.size();i++){
            s.push_back(word[i]);
            if(word[i]==ch && f==0){
                reverse(s.begin(),s.end());
                f=1;
            }
        }
        return s;
    }
};