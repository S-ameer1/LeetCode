class Solution {
public:
    bool help(int n){
        if(n==1 ){
            return 1;
        }
        if(n==0 || n%4!=0 || n<0){
            return 0;
        }
        return help(n/4);
    }
    bool isPowerOfFour(int n) {
        if(n%4!=0 && n!=1){
            return 0;
        }
        return help(n);
        
    }
};