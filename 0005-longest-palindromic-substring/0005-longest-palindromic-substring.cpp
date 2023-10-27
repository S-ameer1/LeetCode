class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 1) return s;
        string finalAns = "";

        int  i = 0;
        while(i<s.length()){

            string ans = "";

            int j = s.length()-1;
            while(j>i){
                if(s[i] == s[j]){

                    int st = i;
                    int e = j;
                
                    int flag = 1;
                    while(st<e){
                        
                        if(s[st] != s[e]){
                            flag = 0;
                            break;
                        } else{
                            st++;
                            e--;
                        }
                    }
                    if(flag == 1){
                        ans = s.substr(i, j-i+1);
                    }
                    if(ans.length() >= finalAns.length()){
                        finalAns = ans;
                    }
                }
                j--;
            }
            
            i++;
        }
        if(finalAns == ""){
            finalAns = s[0];
        }
        return finalAns;
    }
};