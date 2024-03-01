class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count1=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count1++;
            }
        }
        for(int i=0;i<n;i++){
            if(count1>1){
                s[i]='1';
                count1--;
            }
            else{
                s[i]='0';
            }
        }
        s[n-1]='1';
        return s;
        
    }
};