class Solution {
public:
    bool doesAliceWin(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                count++;
            }
        }
        if(count==0){
            return 0;
        }
        return 1;

    }
};