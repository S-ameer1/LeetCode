class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int shiftedbits=0;
        while(left<right){
            left>>=1;
            right>>=1;
            shiftedbits++;
        }
        return left<<shiftedbits;
    }
};