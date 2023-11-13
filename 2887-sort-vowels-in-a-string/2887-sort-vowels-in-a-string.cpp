class Solution {
public:
    string sortVowels(string s) {
        vector<char>temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                temp.push_back(s[i]);
                s[i]='0';
            }
            else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                temp.push_back(s[i]);
                s[i]='0';
            }

        }
        sort(temp.begin(),temp.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s[i]=temp[j];
                j++;
            }
        }
        return s;
    }
};